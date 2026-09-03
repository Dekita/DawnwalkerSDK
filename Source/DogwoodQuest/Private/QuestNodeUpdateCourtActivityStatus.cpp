#include "QuestNodeUpdateCourtActivityStatus.h"

UQuestNodeUpdateCourtActivityStatus::UQuestNodeUpdateCourtActivityStatus() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Status = ECourtEntryStatus::Hidden;
}


