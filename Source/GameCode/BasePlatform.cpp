
#include "BasePlatform.h"

ABasePlatform::ABasePlatform()
{
	PrimaryActorTick.bCanEverTick = true;

	DefaultPlatformRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Platform root"));

	RootComponent = DefaultPlatformRoot;

	PlatformMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Platform"));
	PlatformMesh->SetupAttachment(DefaultPlatformRoot);
}

void ABasePlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartLocation = DefaultPlatformRoot->GetRelativeLocation();

	if (IsValid(TimelineCurve))
	{
		PlatformTimeline.AddInterpFloat(TimelineCurve, FOnTimelineFloatStatic::CreateUObject(this, &ABasePlatform::PlatformTimelineUpdate));
		PlatformTimeline.SetTimelineFinishedFunc(FOnTimelineEventStatic::CreateUObject(this, &ABasePlatform::SwitchDirection));
		
		if (PlatformBehavior == EPlatformBehavior::Loop)
		{
			PlatformTimelineTiltBegin();
		}
	}
}

void ABasePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	PlatformTimeline.TickTimeline(DeltaTime);
}

void ABasePlatform::PlatformTimelineUpdate(float Alpha)
{
	const FVector PlatformTargetLocation = Cur_Direction == 1 ? FMath::Lerp(StartLocation, EndLocation, Alpha) : FMath::Lerp(EndLocation, StartLocation, Alpha);
	DefaultPlatformRoot->SetWorldLocation(PlatformTargetLocation);
}

void ABasePlatform::PlatformInvokatorOnInvoked()
{
	if (!PlatformTimeline.IsPlaying() && Cur_Direction == 1)
	{
		PlatformTimelineTiltBegin();
	}
}

void ABasePlatform::PlatformTimelineTiltBegin()
{
	PlatformTimeline.PlayFromStart();
}

void ABasePlatform::PlatformTimelineTiltEnd()
{
	PlatformTimeline.Stop();
}

void ABasePlatform::SwitchDirection()
{
	Cur_Direction *= -1;
	
	if (PlatformBehavior == EPlatformBehavior::Loop)
	{
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, this, &ABasePlatform::PlatformTimelineTiltBegin, 2.f, false);
	}
	else if (PlatformBehavior == EPlatformBehavior::OnDemand && Cur_Direction == -1)
	{
		FTimerHandle Handle;
		GetWorld()->GetTimerManager().SetTimer(Handle, this, &ABasePlatform::PlatformTimelineTiltBegin, 2.f, false);
	}
}

