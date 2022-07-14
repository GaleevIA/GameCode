// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"

class UBaseCharacterMovementComponent;

UCLASS(Abstract, NotBlueprintable)
class GAMECODE_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABaseCharacter(const FObjectInitializer& ObjectInitializer);
	
	virtual void MoveForward(float Value) {};
	virtual void MoveRight(float Value) {};
	virtual void Turn(float Value) {};
	virtual void LookUp(float Value) {};
	virtual void TurnAtRate(float Value) {};
	virtual void LookUpAtRate(float Value) {};
	
	virtual void ChangeCrouchState();
	
	virtual void StartSprint();
	virtual void StopSprint();
	
	virtual void Tick(float DeltaSeconds) override;

	FORCEINLINE UBaseCharacterMovementComponent* GetBaseCharacterMovementComponent() { return BaseCharacterMovementComponent; };
	
protected:
	UFUNCTION(BlueprintNativeEvent, Category = "Character | Movement")
	void OnSprintStart();
	virtual void OnSprintStart_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category = "Character | Movement")
	void OnSprintEnd();
	virtual void OnSprintEnd_Implementation();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character | Controls")
	float BaseTurnRate = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character | Controls")
	float BaseLookUpRate = 45.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Character | Movement")
	float SprintSpeed = 800.0f;

	virtual bool CanSprint();

	UBaseCharacterMovementComponent* BaseCharacterMovementComponent;
	
private:
	bool bIsSprintRequested = false;

	void TryChangeSprintState();
};
