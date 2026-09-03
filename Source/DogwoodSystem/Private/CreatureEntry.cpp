#include "CreatureEntry.h"

FCreatureEntry::FCreatureEntry() {
    this->Category = ECreatureCategoryType::None;
    this->HealthType = EHealthType::Health;
    this->bDrinkable = false;
    this->bAlwaysFullDrinking = false;
    this->bHasUnconsciousStage = false;
    this->CreatureSize = ECreatureSizeType::None;
    this->EscapeChance = 0.00f;
    this->ShortDrink_Time = 0.00f;
    this->UnconsciousDrink_Time = 0.00f;
    this->FullDrain_Time = 0.00f;
    this->UncontrolledDrink_Time = 0.00f;
    this->ShortDrink_Blood = 0.00f;
    this->UnconsciousDrink_Blood = 0.00f;
    this->FullDrain_Blood = 0.00f;
    this->bCountToInnocentKills = false;
}

