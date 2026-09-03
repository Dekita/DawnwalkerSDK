#include "DogwoodInventorySettings.h"

UDogwoodInventorySettings::UDogwoodInventorySettings() {
    this->SingleTorchDurationSeconds = 360.00f;
    this->DefaultItemLevelRequirementSpread = 4;
    this->ItemUpgradeLevelSpread = 1;
    this->LootLevelScalingDelay = 0.20f;
    this->LastSpawnedItemsHistoryLength = 15;
    this->LastSpawnedEquippableItemsHistoryLength = 6;
    this->LootChanceMultiplierForSameEquippableSlotHistoryEntry = 0.34f;
    this->LootChanceMultiplierForSameItemHistoryEntry = 0.10f;
    this->bUseNewEquipmentLootSystem = true;
    this->DifferentLevelItemsCooldown = 0;
    this->SkillBookActiveAbilityGuaranteeCounter = 200;
    this->DefaultBookSpawnChance = 0.05f;
    this->BookSpawnChanceLevelDeviation = 0.03f;
    this->BookSpawnChanceIncreasePerNoBookDrop = 0.05f;
    this->ItemViewedTimeThreshold = 0.30f;
    this->QuickslotCooldownDuration = 2.00f;
    this->bRefreshShopsOnPlayerLevelUp = true;
}


