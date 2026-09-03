#include "LootableComponent.h"

ULootableComponent::ULootableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Item = NULL;
    this->MinQuantity = 1;
    this->MaxQuantity = 1;
    this->bIsStealable = false;
    this->bAllowExtraPoliceSpawning = false;
    this->bAlwaysAtRiskOfPunishment = false;
    this->bShouldRegenerate = true;
    this->RegenerateAfterDays = 2;
    this->PersistencyComponent = NULL;
}


