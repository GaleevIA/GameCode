
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlatformInvokator.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInvocatorActivated);

UCLASS()
class GAMECODE_API APlatformInvokator : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnInvocatorActivated OnInvocatorActivated;

protected:
	UFUNCTION(BlueprintCallable)
	void Invoke();
	
	virtual void BeginPlay() override;
};
