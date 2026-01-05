#include "ExecutorComponent.h"
#include "DefaultLevelSequenceInstanceData.h"
#include "ExecutedComponent.h"
#include "GameDelegates.h"
#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UExecutorComponent::UExecutorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UExecutorComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UExecutorComponent::TickComponent(float DeltaTime, ELevelTick TickType,
                                       FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

void UExecutorComponent::Execute(ULevelSequence* InLevelSequence)
{
	if (InLevelSequence == nullptr || ExecutedCompRef == nullptr) return;
	//将被处决者旋转向处决者
	AActor* ExecutedActor = ExecutedCompRef->GetOwner();
	if (ExecutedActor)
	{
		FRotator ExecutedRotation = ExecutedActor->GetActorRotation();
		FRotator LookAtRotation = UKismetMathLibrary::FindLookAtRotation(
			ExecutedActor->GetActorLocation(), GetOwner()->GetActorLocation());
		ExecutedActor->SetActorRotation(FRotator(ExecutedRotation.Pitch, LookAtRotation.Yaw, ExecutedRotation.Roll));
	}
	
	//创建序列播放器
	FMovieSceneSequencePlaybackSettings PlaybackSettings;
	PlaybackSettings.bDisableLookAtInput = true;
	PlaybackSettings.bDisableMovementInput = true;
	PlaybackSettings.FinishCompletionStateOverride = EMovieSceneCompletionModeOverride::ForceKeepState;

	SequenceActorRef = GetWorld()->SpawnActor<ALevelSequenceActor>();

	if (SequenceActorRef)
	{
		//设置变换原点
		SequenceActorRef->bOverrideInstanceData = true;
		SequenceActorRef->SetActorLocation(ExecutedActor->GetActorLocation());
		SequenceActorRef->SetActorRotation(ExecutedActor->GetActorRotation());
	
		UDefaultLevelSequenceInstanceData* InstanceData = Cast<UDefaultLevelSequenceInstanceData>(
			SequenceActorRef->DefaultInstanceData);

		if (InstanceData)
		{
			InstanceData->TransformOriginActor = SequenceActorRef;
		}

		//绑定被处决者
		TArray<AActor*> Actors;
		Actors.Add(ExecutedActor);
		
		SequenceActorRef->SetSequence(InLevelSequence);
		SequenceActorRef->SetBindingByTag(CharacterTag, Actors);

		//修改实例数据
		SequenceActorRef->PlaybackSettings = PlaybackSettings;
		SequenceActorRef->SequencePlayer->Initialize(InLevelSequence,GetOwner()->GetLevel(),FLevelSequenceCameraSettings(false));
		//播放
		ULevelSequencePlayer* SequencePlayer = SequenceActorRef->GetSequencePlayer();
		SequencePlayer->OnFinished.AddDynamic(this,&ThisClass::SequencePlayerFinished);
		ViewTargetChangeDelegate = FGameDelegates::Get().GetViewTargetChangedDelegate().AddUObject(
			this, &ThisClass::ViewTargetChanged);
		SequencePlayer->Play();
	}
}

void UExecutorComponent::SetExecutedRef(UExecutedComponent* InExecutedRef)
{
	if (ExecutedCompRef)
	{
		ExecutedCompRef->SetCanExecute(false);
	}
	
	ExecutedCompRef = InExecutedRef;
	if (InExecutedRef)
	{
		InExecutedRef->SetCanExecute(true);
	}


}

void UExecutorComponent::SequencePlayerFinished()
{
	if (SequenceActorRef)
	{
		SequenceActorRef->Destroy();
	}
}

void UExecutorComponent::ViewTargetChanged(APlayerController* PC, AActor* OldViewTarget, AActor* NewViewTarget)
{
	if (NewViewTarget == GetOwner())
	{
		if (APlayerController*PC = UGameplayStatics::GetPlayerController(this,0))
		{
			FRotator NewControlRotation = UKismetMathLibrary::TransformRotation(NewViewTarget->GetActorTransform(),BlendOutCameraRotation);
			PC->SetControlRotation(NewControlRotation);
		}
		FGameDelegates::Get().GetViewTargetChangedDelegate().Remove(ViewTargetChangeDelegate);
	}
}
