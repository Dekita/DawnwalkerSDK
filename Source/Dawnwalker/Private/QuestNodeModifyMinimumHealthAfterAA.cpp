#include "QuestNodeModifyMinimumHealthAfterAA.h"

UQuestNodeModifyMinimumHealthAfterAA::UQuestNodeModifyMinimumHealthAfterAA() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bSetNewValue = false;
    this->MinimumHealthPercentageAfterAACast = 10.00f;
}


