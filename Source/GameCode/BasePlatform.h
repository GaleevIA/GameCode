
#pragma once

#include "CoreMinimal.h"
#include "PlatformInvokator.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Actor.h"
#include "BasePlatform.generated.h"

UENUM()
enum class EPlatformBehavior : uint8
{
	OnDemand = 0,
	Loop
};

UCLASS()
class GAMECODE_API ABasePlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	ABasePlatform();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

	void PlatformTimelineUpdate(float Alpha);
	void PlatformTimelineChangeDirection();

	UFUNCTION(BlueprintCallable)
	void PlatformInvokatorOnInvoked();
	
	UFUNCTION(BlueprintCallable)
	void PlatformTimelineTiltBegin();
	
	UFUNCTION(BlueprintCallable)
	void PlatformTimelineTiltEnd();

	void SwitchDirection();
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UStaticMeshComponent* PlatformMesh;

	UPROPERTY(EditInstanceOnly, BlueprintReadOnly, meta = (MakeEditWidget))
	FVector EndLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Transient)
	FVector StartLocation;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UCurveFloat* TimelineCurve;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	EPlatformBehavior PlatformBehavior = EPlatformBehavior::OnDemand;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite)
	APlatformInvokator* PlatformInvokator;
	
	FTimeline PlatformTimeline;

	FOnTimelineEvent OnTimelineEnd;
};
