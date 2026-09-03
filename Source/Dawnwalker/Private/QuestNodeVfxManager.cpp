#include "QuestNodeVfxManager.h"

UQuestNodeVfxManager::UQuestNodeVfxManager() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(2);
    this->StopMode = EVfxStopMode::UntilWornOut;
}


