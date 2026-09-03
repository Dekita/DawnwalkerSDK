#include "ItemServiceDataAsset.h"
#include "EItemType.h"

UItemServiceDataAsset::UItemServiceDataAsset() {
    this->ItemProperties = 17;
    this->ItemType = EItemType::Service;
    this->FactIntFactValue = 1;
    this->TimeSegmentCost = 0;
}

int32 UItemServiceDataAsset::GetTimeSegmentCost(UInventoryComponent* UserInventory) const {
    return 0;
}


