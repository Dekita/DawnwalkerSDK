#include "PlayerStatsForLevel.h"

FPlayerStatsForLevel::FPlayerStatsForLevel() {
    this->Health = 0.00f;
    this->HealthRegenMultiplier = 0.00f;
    this->StaminaRegenMultiplier = 0.00f;
    this->DodgeStaminaCostMultiplier = 0.00f;
    this->BloodSegments = 0.00f;
    this->BloodPerSegment = 0.00f;
    this->BloodRegenPerSecond = 0.00f;
    this->BloodRegenMultiplier = 0.00f;
    this->BaseMeleeDamage = 0.00f;
    this->BaseAbilityDamage = 0.00f;
    this->BaseVampireAbilityDamage = 0.00f;
    this->BaseUnarmedDamageMin = 0.00f;
    this->BaseUnarmedDamageMax = 0.00f;
    this->BaseClawsDamageMin = 0.00f;
    this->BaseClawsDamageMax = 0.00f;
    this->ToughnessDamageReductionCoefficient = 0.00f;
    this->ToughnessDamageReductionQuadratic = 0.00f;
    this->ClawsDamageMultiplier = 0.00f;
    this->FollowersBaseDamage = 0.00f;
}

