
#include "PlatformInvokator.h"

void APlatformInvokator::Invoke()
{
	if (OnInvocatorActivated.IsBound())
		OnInvocatorActivated.Broadcast();
}

void APlatformInvokator::BeginPlay()
{
	Super::BeginPlay();
	
}

