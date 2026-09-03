#include "QuestNodeRandomPath.h"

UQuestNodeRandomPath::UQuestNodeRandomPath() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->bDrawWithRepetition = false;
    this->bSortAscendingDrawedOutputs = false;
    this->DrawsNumber = 1;
}


