// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ExecutedComponent.generated.h"

class UWidgetComponent;

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class CINEMATICEXECUTIONEDITORTOOLKIT_API UExecutedComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UExecutedComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;
	ACharacter* GetOwnerCharacter();
	
	/*
	 *控件组件
	 */
	void AddWidgetComponent();
	void SetCanExecute(bool bCanExecute);
	UPROPERTY(VisibleInstanceOnly,meta = (AllowPrivateAccess = "true"))
	UWidgetComponent* WidgetComponent;
	
	UPROPERTY(EditDefaultsOnly)
	FName ScoketName = "Spine_03";

	UPROPERTY(EditDefaultsOnly)
	FVector WidgetLocation;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> WidgetClass;
};
