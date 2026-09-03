#include "ItemJunkDataAsset.h"
#include "EItemRarityType.h"
#include "EItemType.h"

UItemJunkDataAsset::UItemJunkDataAsset() {
    this->ItemProperties = 16;
    this->ItemType = EItemType::Junk;
    this->ItemRarity = EItemRarityType::Junk;
}


