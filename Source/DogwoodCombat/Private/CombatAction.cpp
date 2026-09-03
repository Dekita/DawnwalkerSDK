#include "CombatAction.h"

UCombatAction::UCombatAction() {
    this->Type = ECombatActionType::Offensive;
    this->DamageType = ECombatDamageType::Health;
    this->SpecialAttackType = ESpecialAttackType::None;
    this->TrueDamageRatio = 0.00f;
    this->AttackStrength = EAttackStrength::Light;
    this->IsUnblockable = false;
    this->ActionSlotGainMultiplier = 1.00f;
    this->DefenseRatio = 0.50f;
    this->DamageReductionRatio = 0.00f;
    this->ImmuneToTrueDamage = false;
    this->bIsParry = false;
    this->bIsOmniblock = false;
    this->SuccessfulBlockStaminaReward = 0.00f;
    this->IsImported = false;
    this->bUsePercentStaminaCost = false;
}

float UCombatAction::GetStaminaCost(const UObject* WorldContextObject) const {
    return 0.0f;
}

float UCombatAction::GetDamage(const UObject* WorldContextObject) const {
    return 0.0f;
}


