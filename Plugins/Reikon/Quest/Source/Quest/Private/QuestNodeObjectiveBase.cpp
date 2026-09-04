#include "QuestNodeObjectiveBase.h"

UQuestNodeObjectiveBase::UQuestNodeObjectiveBase() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bShowNotification = true;
}


