#include "CommunityController.h"

ACommunityController::ACommunityController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bNeverSetCommunityTarget = false;
}

void ACommunityController::OnCommunityTargetReached() {
}

bool ACommunityController::IsLocationReached(const FVector& CurrentLocation, const FVector& TestedLocation, const bool bAtSpawn) {
    return false;
}


