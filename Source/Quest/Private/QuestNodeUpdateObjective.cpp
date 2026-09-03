#include "QuestNodeUpdateObjective.h"

UQuestNodeUpdateObjective::UQuestNodeUpdateObjective() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->CounterChange = 1;
    this->CounterValue = 0;
    this->bTriggerAutosave = true;
}


