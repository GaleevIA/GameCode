// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacter.h"

#include "GameCode/Components/MovementComponents/BaseCharacterMovementComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

ABaseCharacter::ABaseCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UBaseCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	BaseCharacterMovementComponent = StaticCast<UBaseCharacterMovementComponent*>(GetCharacterMovement()); 
}

void ABaseCharacter::ChangeCrouchState()
{
	if (GetCharacterMovement()->IsCrouching())
	{
		UnCrouch();
	}
	else
	{
		Crouch();
	}
}

void ABaseCharacter::StartSprint()
{
	bIsSprintRequested = true;

	if (bIsCrouched)
	{
		UnCrouch();
	}
}

void ABaseCharacter::StopSprint()
{
	bIsSprintRequested = false;
}

void ABaseCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	TryChangeSprintState();
}

void ABaseCharacter::OnSprintStart_Implementation()
{
}

void ABaseCharacter::OnSprintEnd_Implementation()
{
}

bool ABaseCharacter::CanSprint()
{
	return true;
}

void ABaseCharacter::TryChangeSprintState()
{
	if (bIsSprintRequested && !BaseCharacterMovementComponent->IsSprinting() && CanSprint())
	{
		BaseCharacterMovementComponent->StartSprint();
		OnSprintStart();
	}

	if (!bIsSprintRequested && BaseCharacterMovementComponent->IsSprinting())
	{
		BaseCharacterMovementComponent->StopSprint();
		OnSprintEnd();
	}
}
