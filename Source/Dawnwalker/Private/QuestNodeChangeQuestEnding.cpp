#include "QuestNodeChangeQuestEnding.h"

UQuestNodeChangeQuestEnding::UQuestNodeChangeQuestEnding() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Quest = NULL;
    this->ChosenEnding = 0;
}


