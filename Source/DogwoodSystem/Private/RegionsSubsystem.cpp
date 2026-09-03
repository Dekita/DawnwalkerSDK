#include "RegionsSubsystem.h"

URegionsSubsystem::URegionsSubsystem() {
}

void URegionsSubsystem::TryLockRegionLevel(int32 RegionIndex, bool EnteredRegion) {
}

bool URegionsSubsystem::HasVisitedRegion(const int32 Region) const {
    return false;
}

uint8 URegionsSubsystem::GetRegionLevel(const int32 Region) const {
    return 0;
}

int32 URegionsSubsystem::GetRegionIndexForPosition(const FVector position) const {
    return 0;
}

FRegionData URegionsSubsystem::GetRegionForPosition(const FVector position) const {
    return FRegionData{};
}

FRegionData URegionsSubsystem::GetRegionForActor(const AActor* Actor) const {
    return FRegionData{};
}

int32 URegionsSubsystem::GetRegionCount() {
    return 0;
}


