// Copyright Epic Games, Inc. All Rights Reserved.

#include "Systems/MovieSceneTextPropertySystem.h"
#include "MovieSceneTracksComponentTypes.h"
#include "Systems/TextChannelEvaluatorSystem.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(MovieSceneTextPropertySystem)

UMovieSceneTextPropertySystem::UMovieSceneTextPropertySystem(const FObjectInitializer& InObjectInitializer)
	: Super(InObjectInitializer)
{
	BindToProperty(UE::MovieScene::FMovieSceneTracksComponentTypes::Get()->Text);
	if (HasAnyFlags(RF_ClassDefaultObject))
	{
		DefineImplicitPrerequisite(UTextChannelEvaluatorSystem::StaticClass(), GetClass());
	}
}

void UMovieSceneTextPropertySystem::OnRun(FSystemTaskPrerequisites& InPrerequisites, FSystemSubsequentTasks& Subsequents)
{
	Super::OnRun(InPrerequisites, Subsequents);
}
