#include "QuestNodeChangeSingleOpenWorldMappinState.h"

UQuestNodeChangeSingleOpenWorldMappinState::UQuestNodeChangeSingleOpenWorldMappinState() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->NewState = EMappinState::Regular;
}


