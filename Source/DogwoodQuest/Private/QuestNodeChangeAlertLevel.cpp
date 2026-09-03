#include "QuestNodeChangeAlertLevel.h"

UQuestNodeChangeAlertLevel::UQuestNodeChangeAlertLevel() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Change = EAlertChange::ToMinimum;
}


