#include "QuestNodeHUBManager.h"

UQuestNodeHUBManager::UQuestNodeHUBManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->OperationType = EHubOperationType::EnableTabs;
    this->bModifyVisibility = true;
}


