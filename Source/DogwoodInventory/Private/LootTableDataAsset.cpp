#include "LootTableDataAsset.h"

ULootTableDataAsset::ULootTableDataAsset() {
    this->InheritLootTable = NULL;
}

FLootTableLevelSetConfig ULootTableDataAsset::GetLevelSet(const int32 InLevel, bool& bFound) const {
    return FLootTableLevelSetConfig{};
}


