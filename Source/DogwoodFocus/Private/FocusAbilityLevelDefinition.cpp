#include "FocusAbilityLevelDefinition.h"

FFocusAbilityLevelDefinition::FFocusAbilityLevelDefinition() {
    this->TargetingType = ECombatFocusTargetingType::Single;
    this->AbilityBaseDamageMultiplier = 0.00f;
    this->Cooldown = 0.00f;
    this->FocusChargeCost = 0;
    this->HealthPercentageCost = 0.00f;
    this->AoERadius = 0.00f;
}

