#include "SyncedAnimationSpot.h"
#include "Components/CapsuleComponent.h"

ASyncedAnimationSpot::ASyncedAnimationSpot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Target Spot"));
    this->TargetSpot = (UCapsuleComponent*)RootComponent;
}


