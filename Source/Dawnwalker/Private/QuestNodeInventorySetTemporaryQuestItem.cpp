#include "QuestNodeInventorySetTemporaryQuestItem.h"

UQuestNodeInventorySetTemporaryQuestItem::UQuestNodeInventorySetTemporaryQuestItem() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->ItemDataAsset = NULL;
    this->bSetAsQuestItem = true;
}


