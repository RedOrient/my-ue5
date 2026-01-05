// Copyright Epic Games, Inc. All Rights Reserved.

#include "Tests/MovieSceneFadeTrackTests.h"

#include "Camera/PlayerCameraManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MovieSceneFadeTrackTests)

float UMovieSceneFadeTrackTestLibrary::GetManualFadeAmount(APlayerCameraManager* PlayerCameraManager)
{
	return PlayerCameraManager ? PlayerCameraManager->FadeAmount : 0.f;
}

