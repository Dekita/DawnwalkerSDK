#include "QuestNodeSetJailEnabled.h"

UQuestNodeSetJailEnabled::UQuestNodeSetJailEnabled() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bJailEnabled = true;
}


