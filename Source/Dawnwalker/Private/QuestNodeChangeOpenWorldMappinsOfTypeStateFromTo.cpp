#include "QuestNodeChangeOpenWorldMappinsOfTypeStateFromTo.h"

UQuestNodeChangeOpenWorldMappinsOfTypeStateFromTo::UQuestNodeChangeOpenWorldMappinsOfTypeStateFromTo() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->MappinType = EMappinType::None;
    this->OldState = EMappinState::None;
    this->NewState = EMappinState::None;
}


