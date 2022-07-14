// Fill out your copyright notice in the Description page of Project Settings.


#include "SpiderPawnAnimInstance.h"

#include "GameCode/Characters/SpiderPawn.h"

void USpiderPawnAnimInstance::NativeBeginPlay()
{
	
	Super::NativeBeginPlay();

	checkf(TryGetPawnOwner()->IsA<ASpiderPawn>(), TEXT("USpiderPawnAnimInstance::NativeBeginPlay() SpiderPawnAnimInstance can be used with spider pawn only"));

	CachedSpiderPawnOwner = StaticCast<ASpiderPawn*>(TryGetPawnOwner());
	
}

void USpiderPawnAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!CachedSpiderPawnOwner.IsValid())
	{
		return;
	}

	RightFrontFootEffectorLocation = FVector(CachedSpiderPawnOwner->GetIKRightFrontFootOffset(), 0.0f, 0.0f);
	RightRearFootEffectorLocation = FVector(CachedSpiderPawnOwner->GetIKRightRearFootOffset(), 0.0f, 0.0f);
	LeftFrontFootEffectorLocation = FVector(CachedSpiderPawnOwner->GetIKLeftFrontFootOffset(), 0.0f, 0.0f);
	LeftRearFootEffectorLocation = FVector(CachedSpiderPawnOwner->GetIKLeftRearFootOffset(), 0.0f, 0.0f);
}
