#include "QuestNodeInventoryPanelManager.h"

UQuestNodeInventoryPanelManager::UQuestNodeInventoryPanelManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->OperationType = EInventoryPanelOperationType::EnableFunctionalities;
}


