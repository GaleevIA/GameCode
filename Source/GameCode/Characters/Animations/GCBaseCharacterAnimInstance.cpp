// Fill out your copyright notice in the Description page of Project Settings.


#include "GCBaseCharacterAnimInstance.h"
#include "GameCode/Characters/PlayerCharacter.h"
#include "GameCode/Components/MovementComponents/BaseCharacterMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

void UGCBaseCharacterAnimInstance::NativeBeginPlay()
{
	Super::NativeBeginPlay();

	checkf(TryGetPawnOwner()->IsA<APlayerCharacter>(), TEXT("UGCBaseCharacterAnimInstance::NativeBeginPlay() PlayerCharacter can be used with player character only"));

	CachedCharacter = StaticCast<APlayerCharacter*>(TryGetPawnOwner());
}

void UGCBaseCharacterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (!CachedCharacter.IsValid())
	{
		return;
	}

	UBaseCharacterMovementComponent* CharacterMovement = CachedCharacter->GetBaseCharacterMovementComponent();
	Speed = CharacterMovement->Velocity.Size();
	bIsFalling = CharacterMovement->IsFalling();
	bIsCrouching = CharacterMovement->IsCrouching();
	bIsSprinting = CharacterMovement->IsSprinting();

	RightFootEffectorLocation = FVector(CachedCharacter->GetIKRightFootOffset(), 0.0f, 0.0f);
	LeftFootEffectorLocation = FVector(-CachedCharacter->GetIKLeftFootOffset(), 0.0f, 0.0f);
}
