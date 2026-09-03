#include "UDashManyToAbility.h"

UUDashManyToAbility::UUDashManyToAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->DashParams = NULL;
}

void UUDashManyToAbility::OnInnerDashAbilityEnd(const FAbilityEndedData& AbilityData) {
}


