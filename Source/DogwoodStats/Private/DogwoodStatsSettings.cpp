#include "DogwoodStatsSettings.h"

UDogwoodStatsSettings::UDogwoodStatsSettings() {
    this->CancelAbilitiesOnBloodFatigue = false;
    this->LowHealthThreshold = 30.00f;
    this->FoodEffectivenessInCombatMultiplier = 0.20f;
    this->bEnablePhysicalDamageReductionLimit = true;
    this->PhysicalDamageReductionLimit = 80.00f;
    this->SprintBaseCostPerSecond = 0.00f;
    this->CombatSprintBaseCostPerSecond = 30.00f;
    this->AstralBoostBaseCostPerSecond = 20.00f;
    this->LoadedStatsConfig = NULL;
}

bool UDogwoodStatsSettings::ShouldDisableProficiencyPenalties() const {
    return false;
}

UDogwoodStatsSettings* UDogwoodStatsSettings::GetDogwoodStatsSettings() {
    return NULL;
}


