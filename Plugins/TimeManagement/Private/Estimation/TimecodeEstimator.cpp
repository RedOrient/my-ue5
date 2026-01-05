// Copyright Epic Games, Inc. All Rights Reserved.

#include "Estimation/TimecodeEstimator.h"

#include "Engine/EngineCustomTimeStep.h"
#include "Engine/TimecodeProvider.h"
#include "Estimation/IClockedTimeStep.h"
#include "HAL/IConsoleManager.h"
#include "ITimeManagementModule.h"

namespace UE::TimeManagement::TimecodeEstimation
{
static TAutoConsoleVariable<bool> CVarLogSampling(
	TEXT("Timecode.LogTimecodeSampling"), false, TEXT("When estimating timecode, whether to log sampled time and the current time. For this to take effect, you must use UTimecodeRegressionProvider as custom engine timestep.")
	);
static TAutoConsoleVariable<bool> CVarLogEstimation(
	TEXT("Timecode.LogTimecodeEstimation"), false, TEXT("When estimating timecode, whether to log estimated time and the current time. For this to take effect, you must use UTimecodeRegressionProvider as custom engine timestep.")
);
static TAutoConsoleVariable<bool> CVarLogTimecodeDifference(
	TEXT("Timecode.LogTimecodeDifference"), false, TEXT("Logs the timecode difference between the timecode of the current underlying clock and what is estimated. This is useful for debugging.")
);
static TAutoConsoleVariable<float> CVarUnclearEstimationSubframeThreshold(
	TEXT("Timecode.UnclearEstimationSubframeThreshold"), 0.1f,
	TEXT("If Abs(timecode's subframe  - 0.5f) <= this value, a warning is logged. That is because an estimated value like 14:11:43:16.49 is not a "
		"clear estimate... it is very close to both 14:11:43:16.00, or 14:11:43:17.00")
);

static void LogEstimatedTime(
	double InRelativeTime, IClockedTimeStep& Clock, UTimecodeProvider& TimecodeProvider,
	const FFrameTime& InEstimatedTime, const FFrameTime& InUnroundedEstimatedTime, const FFrameRate& InFrameRate
	)
{
	const auto ToString = [](const FTimecode& InTime)
	{
		constexpr bool bForceSignDisplay = false, bDisplaySubframe = true;
		return InTime.ToString(bForceSignDisplay, bDisplaySubframe);
	};
	
	const TOptional<double> ClockTime = Clock.GetUnderlyingClockTime_AnyThread();
	const double AppTime = FApp::GetCurrentTime();
	UE_CLOG(CVarLogEstimation.GetValueOnAnyThread(), LogTimeManagement, Log,
		TEXT("Estimate %f at %s \t\t(Unrounded: %s \tClock %s, \tApp: %f)"),
		InRelativeTime,
		*ToString(FQualifiedFrameTime(InEstimatedTime, InFrameRate).ToTimecode()),
		*ToString(FQualifiedFrameTime(InUnroundedEstimatedTime, InFrameRate).ToTimecode()),
		ClockTime ? *FString::SanitizeFloat(*ClockTime) : TEXT("unset"), AppTime
		);

	if (CVarLogTimecodeDifference.GetValueOnAnyThread())
	{
		TimecodeProvider.FetchAndUpdate();
		const FQualifiedFrameTime ActualFrameTime = TimecodeProvider.GetQualifiedFrameTime();
		
		FTimecode ActualTC = ActualFrameTime.ToTimecode();
		FTimecode EstimatedTC = FQualifiedFrameTime(InEstimatedTime, InFrameRate).ToTimecode();
		FTimecode EstimatedRoundedTC = FQualifiedFrameTime(InUnroundedEstimatedTime, InFrameRate).ToTimecode();
		const bool bIsTimeEqual = EstimatedTC == ActualTC;
		if (bIsTimeEqual)
		{
			return;
		}

		if (InEstimatedTime > ActualFrameTime.Time)
		{
			const FTimecode AbsDeltaTC = FQualifiedFrameTime(InEstimatedTime - ActualFrameTime.Time, InFrameRate).ToTimecode();
			UE_CLOG(!bIsTimeEqual && InEstimatedTime > ActualFrameTime.Time, LogTimeManagement, Warning,
				TEXT("Leading timecode \tDelta: +%s \tActual: %s \tEstimate: %s \tEstimate (unrounded): %s"),
				*ToString(AbsDeltaTC), *ToString(ActualTC), *ToString(EstimatedTC), *ToString(EstimatedRoundedTC)
			);
		}
		else
		{
			const FTimecode AbsDeltaTC = FQualifiedFrameTime(ActualFrameTime.Time - InEstimatedTime, InFrameRate).ToTimecode();
			UE_CLOG(!bIsTimeEqual && InEstimatedTime < ActualFrameTime.Time, LogTimeManagement, Warning,
				TEXT("Trailing timecode \tDelta: -%s \tActual: %s \tEstimate: %s \tEstimate (unrounded): %s"),
				*ToString(AbsDeltaTC), *ToString(ActualTC), *ToString(EstimatedTC), *ToString(EstimatedRoundedTC)
				);
		}
	}
}

FTimecodeEstimator::FTimecodeEstimator(
	SIZE_T InNumSamples,
	UTimecodeProvider& InTimecode, IClockedTimeStep& InEngineCustomTimeStep
	)
	// Counter-intuitively, we should NOT initialize the start times because it's too early... defer until the data actually starts being sampled.
	// For example, if the custom time step was just changed, then FApp::CurrentTime may not contain the correct value, yet.
	// Or the API user might construct now and only use FTimecodeEstimator much later.
	: StartClockTime()
	, TimecodeProvider(InTimecode)
	, EngineCustomTimeStep(InEngineCustomTimeStep)
	, ClockToTimecodeSamples(InNumSamples)
	, LastFrameRate(InTimecode.GetFrameRate())
{
	// There's no point in constructing FTimecodeEstimator if the number of linear regression samples is 0; it'll just use the latest value.
	ensure(InNumSamples > 0); 
}

TOptional<FFetchAndUpdateStats> FTimecodeEstimator::FetchAndUpdate()
{
	const TOptional<double> ClockTime = EngineCustomTimeStep.GetUnderlyingClockTime_AnyThread();
	if (!ClockTime)
	{
		return {};
	}

	if (!StartClockTime)
	{
		StartClockTime = ClockTime;
	}
	
	TimecodeProvider.FetchAndUpdate(); // FetchAndUpdate fetches the latest timecode value so below GetQualifiedFrameTime returns the lastest value.
	const FQualifiedFrameTime CurrentFrameTime = TimecodeProvider.GetQualifiedFrameTime();
	const FFrameRate CurrentFrameRate = CurrentFrameTime.Rate;
	
	// In a true production environment, the frame rate of the timecode device should not really change on the fly, but we should handle it anyway.
	if (CurrentFrameRate != LastFrameRate) 
	{
		ClockToTimecodeSamples = FCachedLinearRegressionSums(ClockToTimecodeSamples.Samples.Capacity());
		LastFrameRate = CurrentFrameRate;
	}

	// We regress based on relative time for numerical stability. See StartClockTime docstring.
	// Clock values can be very big but double precision is best near 0.
	const FFrameTime& FrameTime = CurrentFrameTime.Time;
	const double FrameTimeAsSeconds = LastFrameRate.AsSeconds(FrameTime);
	const double RelativeTime = *ClockTime - *StartClockTime;

	AddSampleAndUpdateSums(FVector2d{ RelativeTime, FrameTimeAsSeconds }, ClockToTimecodeSamples);
	ComputeLinearRegressionSlopeAndOffset(ClockToTimecodeSamples.CachedSums, LinearRegressionFunction);

	constexpr bool bForceSignDisplay = false, bDisplaySubframe = true;
	UE_CLOG(CVarLogSampling.GetValueOnAnyThread(), LogTimeManagement, Log,
		TEXT("Sampling %f at %s\t\t(Clock: %f, \tApp: %f)"),
		RelativeTime, *FQualifiedFrameTime(FrameTime, LastFrameRate).ToTimecode().ToString(bForceSignDisplay, bDisplaySubframe),
		*ClockTime, FApp::GetCurrentTime()
		);

	return FFetchAndUpdateStats{ CurrentFrameTime };
}

FQualifiedFrameTime FTimecodeEstimator::EstimateFrameTime() const
{
	if (!ClockToTimecodeSamples.IsEmpty()
		&& ensureMsgf(StartClockTime, TEXT("Invariant: StartClockTime was supposed to have been set when the data was sampled!")))
	{
		const double RelativeTime = FApp::GetCurrentTime() - *StartClockTime;
		const double EstimatedSeconds = LinearRegressionFunction.Evaluate(RelativeTime); 
		const FFrameTime UnroundedEstimatedTime = EstimatedSeconds * LastFrameRate;
		
		// Subframe close to 0.5f? It may round to the wrong frame. Flag it so UE developer can investigate it, e.g. 0.47f is quite close 0.5f.
		// We'd expect it to very close to the full frame, e.g. 14:11:43:16.04, or 14:11:43:16.87.
		// A value like 14:11:43:16.42 is much closer to 0.5 than we'd expect... it may indicate that the time step is not linearly correlated
		// to the timecode provider used (e.g. not really a fixed frame rate or some kind of noise).
		const bool bUnclearEstimation = FMath::Abs(UnroundedEstimatedTime.GetSubFrame() - 0.5f) <= CVarUnclearEstimationSubframeThreshold.GetValueOnAnyThread();
		constexpr bool bForceSignDisplay = false, bDisplaySubframe = true;
		UE_CLOG(bUnclearEstimation, LogTimeManagement, Warning,
			TEXT("Time %f estimate of %s is very close to 0.5 subframe border... the resulting timecode's frame may be off by 1."),
			RelativeTime, *FQualifiedFrameTime(UnroundedEstimatedTime, LastFrameRate).ToTimecode().ToString(bForceSignDisplay, bDisplaySubframe)
			);
		
		// FApp::GetCurrentTime() is usually slightly behind, e.g. relative underlying clock may be 2.028365, but FApp::GetCurrentTime() is 2.028364.
		// That can cause slight trailing (provider 14:11:43:17.00, est. 14:11:43:16.99), or leading (provider: 14:11:43:19.00, est. 14:11:43:19.01).
		// We only care about full frames... we drop subframes. That's why slight leading is no problem as the frame number stays the same.
		// Trailing *is* a problem though because the frame is one less.
		// Note: this comment was written when UCatchupFixedRateCustomTimeStep was the only timestep that UTimecodeRegressionProvider was set up with:
		// so this observation is untested with other time steps that may have been added later (5.7+). If you find that behaviour is different
		// between time steps, then we need to adjust this strategy.
		const FFrameTime RoundedEstimatedTime = UnroundedEstimatedTime.RoundToFrame();
		
		LogEstimatedTime(RelativeTime, EngineCustomTimeStep, TimecodeProvider, RoundedEstimatedTime, UnroundedEstimatedTime, LastFrameRate);
		return FQualifiedFrameTime(RoundedEstimatedTime, LastFrameRate);
	}
	
	// This may cause jumps at the beginning, but it can be circumvented by warming up the engine, i.e. just let it run for a few frames
	UE_LOG(LogTimeManagement, Log, TEXT("No data sampled, yet. This frame will fall back to actual timecode without estimation."));
	return TimecodeProvider.GetQualifiedFrameTime();
}
}
