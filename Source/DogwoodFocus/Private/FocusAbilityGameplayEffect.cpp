#include "FocusAbilityGameplayEffect.h"

FFocusAbilityGameplayEffect::FFocusAbilityGameplayEffect() {
    this->MainStatType = EFocusAbilityStatType::None;
    this->GameplayEffect = NULL;
    this->CustomFocusAbilityEffect = ECustomFocusAbilityEffect::None;
    this->ApplyChance = 0.00f;
    this->bAlwaysApplyEffect = false;
    this->EffectTargetOverride = EEffectTargetOverride::Target;
    this->EffectValue = 0.00f;
    this->bIsBaseDamageEffect = false;
    this->EffectDamageMultiplier = 0.00f;
    this->AbilityBaseDamageMultiplierOverride = 0.00f;
    this->StunLevel = 0;
    this->bWorksOnBoss = false;
    this->ItemToConsumeOnActivation = NULL;
    this->BlockedItemWeaponSubtype = EItemWeaponSubtype::None;
    this->EffectNotAppliesDescriptionType = EGenericAAEffectType::None;
}

