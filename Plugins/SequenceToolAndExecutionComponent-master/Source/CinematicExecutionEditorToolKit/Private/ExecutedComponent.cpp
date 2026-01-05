// Fill out your copyright notice in the Description page of Project Settings.


#include "ExecutedComponent.h"

#include "Components/WidgetComponent.h"
#include "GameFramework/Character.h"


// Sets default values for this component's properties
UExecutedComponent::UExecutedComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UExecutedComponent::BeginPlay()
{
	Super::BeginPlay();
	AddWidgetComponent();
}


// Called every frame
void UExecutedComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

ACharacter* UExecutedComponent::GetOwnerCharacter()
{
	return Cast<ACharacter>(GetOwner());
}

void UExecutedComponent::AddWidgetComponent()
{
	GetOwner()->Modify();
	WidgetComponent = NewObject<UWidgetComponent>(GetOwner());
	WidgetComponent->OnComponentCreated();
	FAttachmentTransformRules Rules(EAttachmentRule::SnapToTarget, EAttachmentRule::KeepWorld,
	                                EAttachmentRule::KeepWorld, false);
	WidgetComponent->AttachToComponent(GetOwnerCharacter()->GetMesh(), Rules, ScoketName);
	WidgetComponent->RegisterComponent();

	//设置控件参数
	WidgetComponent->AddWorldOffset(WidgetLocation);
	WidgetComponent->SetWidgetSpace(EWidgetSpace::Screen);
	WidgetComponent->SetVisibility(false,false);
	if (WidgetClass)
	{
		WidgetComponent->SetWidgetClass(WidgetClass);
	}

	WidgetComponent->SetDrawAtDesiredSize(true);
	GetOwner()->AddInstanceComponent(WidgetComponent);
}

void UExecutedComponent::SetCanExecute(bool bCanExecute)
{
	if (bCanExecute)
	{
		WidgetComponent->SetVisibility(true,false);
	}else
	{
		WidgetComponent->SetVisibility(false,false);
	}
}
