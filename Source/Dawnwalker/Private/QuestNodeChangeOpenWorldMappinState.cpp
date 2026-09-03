#include "QuestNodeChangeOpenWorldMappinState.h"

UQuestNodeChangeOpenWorldMappinState::UQuestNodeChangeOpenWorldMappinState() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->NewState = EMappinState::Regular;
    this->OpenWorldContent = NULL;
}


