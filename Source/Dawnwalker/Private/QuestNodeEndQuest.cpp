#include "QuestNodeEndQuest.h"

UQuestNodeEndQuest::UQuestNodeEndQuest() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Quest = NULL;
    this->State = EQuestState::EQS_Success;
    this->bFinishActiveObjectives = true;
    this->ChosenEnding = 0;
    this->bTriggerAutosave = true;
    this->bShowNotification = true;
}


