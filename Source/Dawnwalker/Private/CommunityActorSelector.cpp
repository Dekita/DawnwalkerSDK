#include "CommunityActorSelector.h"

UCommunityActorSelector::UCommunityActorSelector() {
    this->Definition = NULL;
    this->ActorSpawnedByFallback = NULL;
}

TArray<FString> UCommunityActorSelector::GetEntryNameOptions() const {
    return TArray<FString>();
}


