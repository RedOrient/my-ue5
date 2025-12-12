// Copyright Epic Games, Inc. All Rights Reserved.

#include "MovieSceneClock.h"

#include "Engine/World.h"
#include "Evaluation/IMovieSceneCustomClockSource.h"
#include "MovieScene.h"
#include "MovieSceneTimeController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MovieSceneClock)

TSharedPtr<FMovieSceneTimeController> UMovieSceneClock::MakeTimeController(UObject* PlaybackContext) const
{
	return MakeShared<FMovieSceneTimeController_Tick>();
}

TSharedPtr<FMovieSceneTimeController> UMovieSceneExternalClock::MakeTimeController(UObject* PlaybackContext) const
{
	return MakeShared<FMovieSceneTimeController_Custom>(CustomClockSourcePath, PlaybackContext);
}
