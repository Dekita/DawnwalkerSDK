#include "CombatFocusVampireAbility.h"

UCombatFocusVampireAbility::UCombatFocusVampireAbility() {
}

bool UCombatFocusVampireAbility::VampireAbilityConditionPassed_Implementation(const AActor* Target) const {
    return false;
}



float UCombatFocusVampireAbility::GetBloodDrinkValueToHeal(const UAbilitySystemComponent* TargetASC, const UAbilitySystemComponent* PlayerASC) {
    return 0.0f;
}

float UCombatFocusVampireAbility::GetBloodDrinkDamageToDeal(float BloodHealed, int32 AbilityLevel, const UAbilitySystemComponent* TargetASC) {
    return 0.0f;
}


