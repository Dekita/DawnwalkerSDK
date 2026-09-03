#include "QuestNodeWardManager.h"

UQuestNodeWardManager::UQuestNodeWardManager() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->TargetState = ERuneState::Disabled;
}


