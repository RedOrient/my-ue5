// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettings.h"

#include "MovieGraphDataTypes.h"
#include "MovieGraphQuickRenderSettings.h"
#include "MoviePipelinePostRenderSettings.h"

#include "MovieRenderGraphEditorSettings.generated.h"

#define UE_API MOVIERENDERPIPELINECORE_API

UCLASS(MinimalAPI, BlueprintType, Config=EditorPerProjectUserSettings, meta=(DisplayName="Movie Render Graph"))
class UMovieRenderGraphEditorSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UE_API UMovieRenderGraphEditorSettings();

	UE_API virtual FName GetCategoryName() const override;

#if WITH_EDITOR
	UE_API virtual void PostEditChangeChainProperty(FPropertyChangedChainEvent& PropertyChangedEvent) override;
#endif

	/** If PostRenderBehavior is set to PlayRenderOutput, these settings are used to determine how to play media. */
	UPROPERTY(Config, EditAnywhere, Category="Play Render Output (Quick Render only)", meta=(ShowOnlyInnerProperties))
	FMovieGraphPostRenderSettings PostRenderSettings;
};

#undef UE_API
