#include "NecrospeakNPC.h"

ANecrospeakNPC::ANecrospeakNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Config = NULL;
    this->NecrospeakVFX = NULL;
    this->SpawnedNecrospeakVFX = NULL;
    this->CurrentState = ENecrospeakState::Disabled;
}

UNiagaraComponent* ANecrospeakNPC::SpawnNecrospeakVFX_Implementation() {
    return NULL;
}



void ANecrospeakNPC::OnEnteredFocus() {
}


