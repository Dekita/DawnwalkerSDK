#include "QuestNodeInventoryReward.h"

UQuestNodeInventoryReward::UQuestNodeInventoryReward() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bMarkAddedItemsAsNew = true;
}


