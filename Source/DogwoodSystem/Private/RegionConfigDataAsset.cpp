#include "RegionConfigDataAsset.h"

URegionConfigDataAsset::URegionConfigDataAsset() {
    this->RegionDataTable = NULL;
}

uint8 URegionConfigDataAsset::GetRegionLevel_Implementation(const UObject* WorldContextObject, const int32 RegionIndex) const {
    return 0;
}


