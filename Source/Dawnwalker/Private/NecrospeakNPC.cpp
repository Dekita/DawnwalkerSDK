#include "NecrospeakNPC.h"

ANecrospeakNPC::ANecrospeakNPC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Config = NULL;
    this->NecrospeakVFX = NULL;
    this->SpawnedNecrospeakVFX = NULL;
    this->CurrentState = ENecrospeakState::Disabled;
    this->NecrospeakEnableSFX = NULL;
    this->NecrospeakDisableSFX = NULL;
}

UNiagaraComponent* ANecrospeakNPC::SpawnNecrospeakVFX_Implementation() {
    return NULL;
}



void ANecrospeakNPC::OnEnteredFocus() {
}


