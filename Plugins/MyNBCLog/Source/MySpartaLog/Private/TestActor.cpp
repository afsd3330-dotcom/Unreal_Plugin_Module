#include "TestActor.h"
#include "MySpartaLog.h"

ATestActor::ATestActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogMySparta, Display, TEXT("Actor call MySpartaLog Module!"));
	
}

