#include "QuestNodeChangePlayerFormSelectionPolicy.h"

UQuestNodeChangePlayerFormSelectionPolicy::UQuestNodeChangePlayerFormSelectionPolicy() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->NewPolicy = EPlayerFormSelectionPolicy::BasedOnTimeOfDay;
}


