#include "ScoutTowerAbility.h"

UScoutTowerAbility::UScoutTowerAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}



void UScoutTowerAbility::OnShadowstepEnded(bool bWasInterrupted) {
}

FTransform UScoutTowerAbility::GetWarpTarget() {
    return FTransform{};
}


