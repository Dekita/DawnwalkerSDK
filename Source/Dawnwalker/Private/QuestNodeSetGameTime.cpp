#include "QuestNodeSetGameTime.h"

UQuestNodeSetGameTime::UQuestNodeSetGameTime() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->TriggerHUDInfoUpdate = false;
}


