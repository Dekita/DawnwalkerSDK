#include "QuestNodeSetGlobalChapelState.h"

UQuestNodeSetGlobalChapelState::UQuestNodeSetGlobalChapelState() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->State = EChapelState::Enabled;
}


