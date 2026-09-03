#include "QuestNodeSetLootingEnabled.h"

UQuestNodeSetLootingEnabled::UQuestNodeSetLootingEnabled() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bIsLootingEnabled = true;
}


