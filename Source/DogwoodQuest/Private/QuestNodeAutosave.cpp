#include "QuestNodeAutosave.h"

UQuestNodeAutosave::UQuestNodeAutosave() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bIgnoreSaveLock = false;
    this->Type = EQuestAutosaveType::Default;
    this->bIsFinal = false;
    this->bIsDebug = false;
}


