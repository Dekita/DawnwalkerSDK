#include "EmptyQuestPawn.h"
#include "Components/SceneComponent.h"
#include "ActorStubComponent.h"

AEmptyQuestPawn::AEmptyQuestPawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->StubComponent = CreateDefaultSubobject<UActorStubComponent>(TEXT("Stub"));
    this->StubComponent->SetupAttachment(RootComponent);
}


