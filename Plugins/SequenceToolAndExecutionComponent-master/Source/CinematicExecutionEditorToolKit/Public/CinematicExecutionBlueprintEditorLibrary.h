// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintEditorLibrary.h"
#include "CinematicExecutionBlueprintEditorLibrary.generated.h"

class UMovieSceneSection;
DECLARE_DYNAMIC_DELEGATE_OneParam(FOnActorSelectedBP, AActor*, SelectedActor);
/**
 * 
 */
UCLASS()
class CINEMATICEXECUTIONEDITORTOOLKIT_API UCinematicExecutionBlueprintEditorLibrary : public UBlueprintEditorLibrary
{
	GENERATED_BODY()
	public:
	UFUNCTION(BlueprintCallable)
	static void CopyToClipBoard(const FString & String);

	UFUNCTION(BlueprintCallable)
	static void SetSectionEase(UMovieSceneSection* Section, int32 EaseInFrameTime, int32 EaseOutFrameTime);

	UFUNCTION(BlueprintCallable)
	static void GetSectionEase(UMovieSceneSection* Section,int32& EaseInTime,int32& EaseOutTime);
	
};
