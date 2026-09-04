#include "RebelCrowdModifierVolume.h"

ARebelCrowdModifierVolume::ARebelCrowdModifierVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnabled = false;
    this->DayQuantityMin = 0;
    this->DayQuantityMax = 0;
    this->NightQuantityMin = 0;
    this->NightQuantityMax = 0;
    this->RainCurve = NULL;
    this->CrowdSubsystem = NULL;
}


