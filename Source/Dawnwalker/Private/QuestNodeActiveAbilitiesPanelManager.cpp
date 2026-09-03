#include "QuestNodeActiveAbilitiesPanelManager.h"

UQuestNodeActiveAbilitiesPanelManager::UQuestNodeActiveAbilitiesPanelManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->OperationType = EActiveAbilitiesPanelOperationType::EnableFunctionalities;
}


