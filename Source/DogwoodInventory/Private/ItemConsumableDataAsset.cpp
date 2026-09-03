#include "ItemConsumableDataAsset.h"
#include "EItemType.h"

UItemConsumableDataAsset::UItemConsumableDataAsset() {
    this->ItemProperties = 17;
    this->ItemType = EItemType::Consumable;
    this->MatchingEquipmentSlots.AddDefaulted(4);
    this->ConsumableType = EItemConsumableType::Human;
    this->FactIntFactValue = 1;
    this->bIsHealing = false;
}

bool UItemConsumableDataAsset::IsFood() {
    return false;
}


