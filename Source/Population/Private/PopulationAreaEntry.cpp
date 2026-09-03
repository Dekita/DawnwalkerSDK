#include "PopulationAreaEntry.h"

FPopulationAreaEntry::FPopulationAreaEntry() {
    this->AIDefinition = NULL;
    this->AIReactions = NULL;
    this->bIsHostile = false;
    this->DayPhaseActivity = EPopulationDayPhaseActivity::BothDayAndNight;
    this->NPCRole = ENPCRole::Filler_NoSave;
    this->RespawnPolicy = ERespawnPolicy::DoNotRespawn;
    this->Behavior = EPopulationAreaEntryBehavior::RandomPoints;
    this->Quantity = 0;
    this->MaxQuantity = 0;
    this->CrowdDefaultDayQuantityMin = 0;
    this->CrowdDefaultDayQuantityMax = 0;
    this->CrowdDefaultNightQuantityMin = 0;
    this->CrowdDefaultNightQuantityMax = 0;
    this->RainCurve = NULL;
    this->ActionPointChangeFrequency = EActionPointChangeFrequency::Never;
    this->MontagelessActionPointNumberMultiplier = 0.00f;
}

