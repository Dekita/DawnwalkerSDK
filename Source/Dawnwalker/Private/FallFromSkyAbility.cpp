#include "FallFromSkyAbility.h"

UFallFromSkyAbility::UFallFromSkyAbility() {
    this->GroundCheckDistance = 50.00f;
    this->StopFallingSafeguardTime = 3.00f;
    this->OwnerStoppedFallingTime = 0.00f;
    this->PreviousZPosition = 0.00f;
    this->StartFallingMontageLoaded = NULL;
    this->LoopFallingMontageLoaded = NULL;
    this->EndFallingMontageLoaded = NULL;
    this->TickTask = NULL;
}

void UFallFromSkyAbility::TickFall(float DeltaTime) {
}

void UFallFromSkyAbility::OnExecuteReceived(FGameplayEventData Payload) {
}


