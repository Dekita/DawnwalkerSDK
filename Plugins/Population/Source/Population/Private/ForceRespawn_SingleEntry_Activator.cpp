#include "ForceRespawn_SingleEntry_Activator.h"
#include "ECommunityEntryOperation.h"

UForceRespawn_SingleEntry_Activator::UForceRespawn_SingleEntry_Activator() {
    this->Mode = ECommunityEntryOperation::Respawn;
}

TArray<FString> UForceRespawn_SingleEntry_Activator::GetEntryNameOptions() const {
    return TArray<FString>();
}


