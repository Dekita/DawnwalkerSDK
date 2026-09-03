#include "CombatArena.h"
#include "Components/SceneComponent.h"

ACombatArena::ACombatArena(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootSceneComponent"));
    this->RootSceneComponent = (USceneComponent*)RootComponent;
    this->Radius = 1000.00f;
}

bool ACombatArena::IsLocationInside(const FVector& Location) const {
    return false;
}

bool ACombatArena::IsActorInside(const AActor* Actor) const {
    return false;
}

float ACombatArena::GetRadius() const {
    return 0.0f;
}

FVector ACombatArena::GetClosestPointInside(const FVector& Location) const {
    return FVector{};
}

FVector ACombatArena::GetCenter() const {
    return FVector{};
}


