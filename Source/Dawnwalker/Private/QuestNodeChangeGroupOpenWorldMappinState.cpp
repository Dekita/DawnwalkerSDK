#include "QuestNodeChangeGroupOpenWorldMappinState.h"

UQuestNodeChangeGroupOpenWorldMappinState::UQuestNodeChangeGroupOpenWorldMappinState() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->NewState = EMappinState::Regular;
}


