#include "StealableVolume.h"

AStealableVolume::AStealableVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Type = EStealableVolumeType::SetStealable;
    this->bAllowExtraPoliceSpawning = false;
}

void AStealableVolume::OnFactChanged(const FGameplayTag& FactName) {
}


