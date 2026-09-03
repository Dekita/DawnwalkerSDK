#include "CombatFocusAttackAbilityBase.h"

UCombatFocusAttackAbilityBase::UCombatFocusAttackAbilityBase() {
    this->bVampireSword = false;
    this->bVampireClaw = false;
    this->bHumanSword = false;
    this->bHumanHandToHand = false;
}

void UCombatFocusAttackAbilityBase::TryPlayBloodEffects(AActor* Target, EAttackStrength AttackStrength, FVector& HitLocation, UCombatComponentBase* DefenderCombatComponent) const {
}

void UCombatFocusAttackAbilityBase::OverrideRestoreSwordFight(bool bEnabled) {
}

float UCombatFocusAttackAbilityBase::GetTargetHealth() const {
    return 0.0f;
}

FGameplayTagContainer UCombatFocusAttackAbilityBase::GetTagsAppliedToEffectAbilitySpecific_Implementation() const {
    return FGameplayTagContainer{};
}

float UCombatFocusAttackAbilityBase::GetHitChanceForPlayer(APlayerController* PlayerController) {
    return 0.0f;
}

float UCombatFocusAttackAbilityBase::GetHitChance(FGameplayAbilityTargetDataHandle& TargetData) {
    return 0.0f;
}


