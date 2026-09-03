#include "ForcedPawnVisibilityVolume.h"

AForcedPawnVisibilityVolume::AForcedPawnVisibilityVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->bEnableAutoLODGeneration = false;
    this->WhenPlayerIsOutside = EVisibilityType::NotVisibleAndNotSeenRecently;
    this->WhenPlayerIsInside = EVisibilityType::BecomesVisible;
}


