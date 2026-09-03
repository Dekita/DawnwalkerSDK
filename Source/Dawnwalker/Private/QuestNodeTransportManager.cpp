#include "QuestNodeTransportManager.h"

UQuestNodeTransportManager::UQuestNodeTransportManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->Action = EQuestNodeTransportState::MovementFormationControlled;
}


