// Copyright Epic Games, Inc. All Rights Reserved.

#include "Decorations/MovieSceneMuteSoloDecoration.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MovieSceneMuteSoloDecoration)

UMovieSceneMuteSoloDecoration::UMovieSceneMuteSoloDecoration()
{
	// Mute Solo Decoration is not meant to be saved
	SetFlags(RF_Transient);
}
