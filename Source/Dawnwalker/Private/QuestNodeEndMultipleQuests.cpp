#include "QuestNodeEndMultipleQuests.h"

UQuestNodeEndMultipleQuests::UQuestNodeEndMultipleQuests() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->State = EQuestState::EQS_Failure;
}


