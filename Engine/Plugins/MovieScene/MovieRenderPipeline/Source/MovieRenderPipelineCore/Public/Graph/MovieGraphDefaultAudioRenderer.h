// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "MovieGraphDataTypes.h"

#include "MovieGraphDefaultAudioRenderer.generated.h"

#define UE_API MOVIERENDERPIPELINECORE_API

/**
 * Provides default audio rendering for the pipeline.
 */
UCLASS(MinimalAPI, BlueprintType, meta = (DisplayName = "Default Audio Renderer"))
class UMovieGraphDefaultAudioRenderer : public UMovieGraphAudioRendererBase
{
	GENERATED_BODY()

public:
	UMovieGraphDefaultAudioRenderer() = default;

protected:
	// UMovieGraphAudioOutputBase interface
	UE_API virtual void StartAudioRecording() override;
	UE_API virtual void StopAudioRecording() override;
	UE_API virtual void ProcessAudioTick() override;
	UE_API virtual void SetupAudioRendering() override;
	UE_API virtual void TeardownAudioRendering() const override;
	// ~UMovieGraphAudioOutputBase
};

#undef UE_API
