// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GCBasePawnMovementController.generated.h"

/**
 * 
 */
UCLASS()
class GAMECODE_API UGCBasePawnMovementController : public UPawnMovementComponent
{
	GENERATED_BODY()

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:

	void JumpStart();

	virtual bool IsFalling() const override;
	
protected:
	
	UPROPERTY(EditAnywhere)
	float fMaxSpeed = 600.0f;

	UPROPERTY(EditAnywhere)
	float fInitialJumpVelocity = 500.0f;

	UPROPERTY(EditAnywhere)
	bool bEnableGravity = true;

private:

	FVector VerticalVelocity = FVector::ZeroVector;
	
	bool bIsFalling = false;
};
