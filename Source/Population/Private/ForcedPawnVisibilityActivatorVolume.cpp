#include "ForcedPawnVisibilityActivatorVolume.h"

AForcedPawnVisibilityActivatorVolume::AForcedPawnVisibilityActivatorVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->bEnableAutoLODGeneration = false;
    this->VolumeToActivate = NULL;
}


