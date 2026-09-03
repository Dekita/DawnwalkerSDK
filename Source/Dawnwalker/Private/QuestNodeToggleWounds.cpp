#include "QuestNodeToggleWounds.h"

UQuestNodeToggleWounds::UQuestNodeToggleWounds() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bEnableWounds = false;
}


