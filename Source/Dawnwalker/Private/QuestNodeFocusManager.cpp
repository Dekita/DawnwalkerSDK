#include "QuestNodeFocusManager.h"

UQuestNodeFocusManager::UQuestNodeFocusManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bModifySlotsChargedOverride = false;
    this->bResetSlotsChargedOverride = false;
    this->SlotsChargedOverride = 1.00f;
}


