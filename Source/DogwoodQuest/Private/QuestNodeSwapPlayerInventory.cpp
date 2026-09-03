#include "QuestNodeSwapPlayerInventory.h"

UQuestNodeSwapPlayerInventory::UQuestNodeSwapPlayerInventory() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bGeneratePlayerInventoryLevelsAfterSwap = false;
}


