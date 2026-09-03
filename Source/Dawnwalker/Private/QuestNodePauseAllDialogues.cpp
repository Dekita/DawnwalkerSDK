#include "QuestNodePauseAllDialogues.h"

UQuestNodePauseAllDialogues::UQuestNodePauseAllDialogues() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bPause = true;
}


