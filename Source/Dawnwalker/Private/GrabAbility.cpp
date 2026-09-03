#include "GrabAbility.h"

UGrabAbility::UGrabAbility() {
    this->InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    this->AbilityTriggers.AddDefaulted(1);
    this->InstigatorMontage = NULL;
    this->TargetMontage = NULL;
    this->RecoveryTime = 2.00f;
}

void UGrabAbility::ReleaseTarget() {
}

void UGrabAbility::PlayAttack() {
}

void UGrabAbility::OnCombatStateChanged(const ECombatState NewState) {
}

void UGrabAbility::End() {
}

void UGrabAbility::ApplyDamage(UCombatComponentBase* InInstigator, UCombatAction* CombatAction) {
}


