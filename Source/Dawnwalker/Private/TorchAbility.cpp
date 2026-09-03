#include "TorchAbility.h"

UTorchAbility::UTorchAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->TorchAnimLayer = NULL;
    this->CombatStartedTask = NULL;
}

void UTorchAbility::OnAnimInstanceChanged() {
}


