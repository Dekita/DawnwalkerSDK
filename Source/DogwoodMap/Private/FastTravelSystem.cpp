#include "FastTravelSystem.h"

UFastTravelSystem::UFastTravelSystem() {
    this->FastTravelSafetyPlatform = NULL;
}

EFastTravelResult UFastTravelSystem::FastTravelToPin(const FMappinInstanceId& InstanceId) {
    return EFastTravelResult::Failure;
}

EFastTravelResult UFastTravelSystem::FastTravelToLocation(const FVector& Location, const FRotator& Rotation) {
    return EFastTravelResult::Failure;
}


