
#include "BasePlatform.h"

ABasePlatform::ABasePlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* DefaultPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Platform root"));

	RootComponent = DefaultPlatformRoot;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	PlatformMesh->SetupAttachment(DefaultPlatformRoot);
}

void ABasePlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = PlatformMesh->GetRelativeLocation();

	if (IsValid(TimelineCurve))
	{
		OnTimelineEnd.BindUFunction(this, FName("SwitchDirection"));
		
		FOnTimelineFloat PlatformMovementTimelineUpdate;
		PlatformMovementTimelineUpdate.BindUFunction(this, FName("PlatformTimelineUpdate"));
		PlatformTimeline.AddInterpFloat(TimelineCurve, PlatformMovementTimelineUpdate);
		PlatformTimeline.SetTimelineFinishedFunc(OnTimelineEnd);
		
		if (PlatformBehavior == EPlatformBehavior::Loop)
			PlatformTimelineTiltBegin();
	}
}

void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	PlatformTimeline.TickTimeline(DeltaTime);
}

void ABasePlatform::PlatformTimelineUpdate(float Alpha)
{
	UE_LOG(LogTemp, Warning, TEXT("Updating"));
	
	const FVector PlatformTargetLocation = FMath::Lerp(StartLocation, EndLocation, Alpha);
	PlatformMesh->SetRelativeLocation(PlatformTargetLocation);
}

void ABasePlatform::PlatformTimelineChangeDirection()
{
	if (PlatformTimeline.IsReversing())
		PlatformTimeline.PlayFromStart();
	else
		PlatformTimeline.ReverseFromEnd();
}

void ABasePlatform::PlatformInvokatorOnInvoked()
{
	PlatformTimelineTiltBegin();
}

void ABasePlatform::PlatformTimelineTiltBegin()
{
	PlatformTimeline.Play();
}

void ABasePlatform::PlatformTimelineTiltEnd()
{
	PlatformTimeline.Stop();
}

void ABasePlatform::SwitchDirection()
{
	if (PlatformBehavior == EPlatformBehavior::OnDemand)
	{
		PlatformTimelineChangeDirection();

		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, this, &ABasePlatform::PlatformTimelineTiltEnd, 2.f, false);
	}
	else
	{
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, this, &ABasePlatform::PlatformTimelineChangeDirection, 2.f, false);
	}
}

