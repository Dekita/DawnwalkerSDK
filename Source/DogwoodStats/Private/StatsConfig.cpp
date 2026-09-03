#include "StatsConfig.h"

UStatsConfig::UStatsConfig() {
    this->StatsTable = NULL;
    this->AddHealthEffect = NULL;
    this->SwordCritDamageMultiplier = 1.50f;
    this->ClawsCritDamageMultiplier = 1.50f;
    this->UnarmedCritDamageMultiplier = 1.50f;
    this->PlayerDamageLevelDifferenceModifier = NULL;
    this->NpcDamageLevelDifferenceMultiplier = NULL;
    this->NpcFocusResistanceModifier = NULL;
    this->NpcFocusResistanceBaseDamageMultiplier = NULL;
    this->NpcFocusResistanceEffectChanceMultiplier = NULL;
    this->NpcFocusResistanceEffectDurationMultiplier = NULL;
    this->NpcFocusResistanceEffectPowerMultiplier = NULL;
    this->NpcFocusResistanceSpecialEffectChanceMultiplier = NULL;
    this->NPCBlockingChanceIncreaseMultiplier = NULL;
    this->AttributeGrowthMultiplierPerLevel = NULL;
    this->StatProfileEffectClass = NULL;
    this->WeaponStatsEffectClass = NULL;
    this->PermanentParametersEffectClass = NULL;
    this->DeathEffectClass = NULL;
    this->PreDeathEffectClass = NULL;
    this->BloodReviveEffectClass = NULL;
    this->SecondChanceEffectClass = NULL;
    this->DealtDamageEffectClass = NULL;
    this->ClothingStatsEffectClass = NULL;
    this->PostConsumableItemUsedEffectClass = NULL;
    this->PostConsumableItemUsedVampireEffectClass = NULL;
}


