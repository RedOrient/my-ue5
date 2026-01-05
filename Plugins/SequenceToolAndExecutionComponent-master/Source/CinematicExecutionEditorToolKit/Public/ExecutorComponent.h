// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "LevelSequence.h"
#include "Camera/CameraComponent.h"
#include "Components/ActorComponent.h"
#include "ExecutorComponent.generated.h"


class ALevelSequenceActor;
class UExecutedComponent;
class APlayerController;
UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CINEMATICEXECUTIONEDITORTOOLKIT_API UExecutorComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UExecutorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	
	/*
	 *处决
	 */
	UFUNCTION(BlueprintCallable)
	void Execute(ULevelSequence* InLevelSequence);
	UFUNCTION(BlueprintCallable)
	void SetExecutedRef(UExecutedComponent* InExecutedRef);
	UFUNCTION()
	void SequencePlayerFinished();
	UFUNCTION()
	void ViewTargetChanged(APlayerController* PC,AActor* OldViewTarget,AActor *NewViewTarget);
	UPROPERTY(EditDefaultsOnly)
	FName CharacterTag = TEXT("敌人");
	UPROPERTY(EditDefaultsOnly)
	FRotator BlendOutCameraRotation = FRotator(-25,0,0);
	UPROPERTY(BlueprintReadOnly)
	UExecutedComponent* ExecutedCompRef;

	ALevelSequenceActor* SequenceActorRef;
	FDelegateHandle ViewTargetChangeDelegate;
};
