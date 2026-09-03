#include "GuardArea.h"
#include "Components/BoxComponent.h"
#include "Components/SceneComponent.h"

AGuardArea::AGuardArea(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SoftGuardAreaCollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("SoftGuardAreaCollisionComp"));
    this->CombatBufferDistance = 1000.00f;
    this->bIsRestricted = false;
    this->bAggroMembersWhenStealingIsNoticed = false;
    this->bOverrideReactionTime = false;
    this->OverridenReactionTime = 10.00f;
    this->CustomShapeSpline = NULL;
    this->Root = (USceneComponent*)RootComponent;
    this->SoftGuardAreaCollisionComponent->SetupAttachment(RootComponent);
}


