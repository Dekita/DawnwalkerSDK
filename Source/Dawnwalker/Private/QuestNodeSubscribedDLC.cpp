#include "QuestNodeSubscribedDLC.h"

UQuestNodeSubscribedDLC::UQuestNodeSubscribedDLC() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->DLCTitleID = EDogwoodDLCType::EarlyUnlockSangoran;
}


