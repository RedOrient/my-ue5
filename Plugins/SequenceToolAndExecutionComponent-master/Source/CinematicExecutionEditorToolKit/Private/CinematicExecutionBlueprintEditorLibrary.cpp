#include "CinematicExecutionBlueprintEditorLibrary.h"
#include "LevelSequenceEditorBlueprintLibrary.h"
#include "MovieScene.h"
#include "MovieSceneSection.h"
#include "Runtime/LevelSequence/Public/LevelSequence.h"
#include "Windows/WindowsPlatformApplicationMisc.h"

void UCinematicExecutionBlueprintEditorLibrary::CopyToClipBoard(const FString& String)
{
	FPlatformApplicationMisc::ClipboardCopy(*String);
}

void UCinematicExecutionBlueprintEditorLibrary::SetSectionEase(UMovieSceneSection* Section, int32 EaseInFrameTime, int32 EaseOutFrameTime)
{
	if (Section == nullptr) return;

	FScopedTransaction Transaction(FText::FromString(TEXT("修改序列器缓动时长")));
	Section->Modify();
	
	ULevelSequence *Sequence = ULevelSequenceEditorBlueprintLibrary::GetCurrentLevelSequence();
	if (Sequence == nullptr) return;
	UMovieScene* MovieScene = Sequence->MovieScene;
	if (MovieScene == nullptr) return;
	double TicksPerFrame = MovieScene->GetTickResolution().AsDecimal() / MovieScene->GetDisplayRate().AsDecimal();
	Section->Easing.bManualEaseIn = true;
	Section->Easing.bManualEaseOut = true;
	Section->Easing.ManualEaseInDuration = FMath::RoundToInt(EaseInFrameTime * TicksPerFrame);
	Section->Easing.ManualEaseOutDuration = FMath::RoundToInt(EaseOutFrameTime * TicksPerFrame);

#if WITH_EDITOR
	Section->PostEditChange();
#endif
}

void UCinematicExecutionBlueprintEditorLibrary::GetSectionEase(UMovieSceneSection* Section, int32& EaseInTime, int32& EaseOutTime)
{
	if (Section == nullptr) return;

	ULevelSequence *Sequence = ULevelSequenceEditorBlueprintLibrary::GetCurrentLevelSequence();
	if (Sequence == nullptr) return;
	UMovieScene* MovieScene = Sequence->MovieScene;
	if (MovieScene == nullptr) return;
	double TicksPerFrame = MovieScene->GetTickResolution().AsDecimal() / MovieScene->GetDisplayRate().AsDecimal();

	
	EaseInTime  =FMath::RoundToInt(Section->Easing.ManualEaseInDuration/TicksPerFrame);
	EaseOutTime = FMath::RoundToInt(Section->Easing.ManualEaseOutDuration/TicksPerFrame);
}
