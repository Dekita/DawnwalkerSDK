#include "QuestNodeReactivateObjective.h"

UQuestNodeReactivateObjective::UQuestNodeReactivateObjective() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bTriggerAutosave = false;
    this->bReactivateQuestIfNeeded = false;
}


