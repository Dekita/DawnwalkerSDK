#include "ShadowstepExecutionAbility.h"

UShadowstepExecutionAbility::UShadowstepExecutionAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
}

void UShadowstepExecutionAbility::OnAnimationEnded() {
}


