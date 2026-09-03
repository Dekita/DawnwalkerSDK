#include "ActorInWaterData.h"

FActorInWaterData::FActorInWaterData() {
    this->ActorPtr = NULL;
    this->bInDeepWaterTagApplied = false;
    this->bInAnyWaterTagApplied = false;
    this->bDidFirstUpdateWhenEnteredWater = false;
}

