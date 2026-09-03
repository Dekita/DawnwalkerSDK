#include "QuestNodeTransferItemsBetweenStorage.h"

UQuestNodeTransferItemsBetweenStorage::UQuestNodeTransferItemsBetweenStorage() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->Direction = ETransferDirection::PlayerToStorage;
    this->bTransferAllItems = false;
    this->ItemType = EItemType::None;
}


