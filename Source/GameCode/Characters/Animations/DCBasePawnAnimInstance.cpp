// Fill out your copyright notice in the Description page of Project Settings.


#include "DCBasePawnAnimInstance.h"
#include "../GameCodeBasePawn.h"
#include "../../Components/MovementComponents/GCBasePawnMovementController.h"

void UDCBasePawnAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	checkf(TryGetPawnOwner()->IsA<AGameCodeBasePawn>(), TEXT("UDCBasePawnAnimInstance::NativeBeginPlay() only GameCodeBasePawn can work"));

	CachedBasePawn = StaticCast<AGameCodeBasePawn*>(TryGetPawnOwner());
}

void UDCBasePawnAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!CachedBasePawn.IsValid())
	{
		return;
	}

	InputForward = CachedBasePawn->GetInputForward();
	InputRight = CachedBasePawn->GetInputRight();
	bIsInAir = CachedBasePawn->GetMovementComponent()->IsFalling();
}
