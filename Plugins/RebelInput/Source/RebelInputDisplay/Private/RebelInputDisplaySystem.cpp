#include "RebelInputDisplaySystem.h"

URebelInputDisplaySystem::URebelInputDisplaySystem() {
}

bool URebelInputDisplaySystem::HasBrushForKey(const FKey& Key, uint8 DirectionMask, bool bCheckAllAvailableSets) const {
    return false;
}

FSlateBrush URebelInputDisplaySystem::GetBrushForKeyFromSet(const FKey& Key, uint8 DirectionMask, ERebelInputIconType IconSet) const {
    return FSlateBrush{};
}

FSlateBrush URebelInputDisplaySystem::GetBrushForKey(const FKey& Key, uint8 DirectionMask, bool bCheckAllAvailableSets) const {
    return FSlateBrush{};
}


