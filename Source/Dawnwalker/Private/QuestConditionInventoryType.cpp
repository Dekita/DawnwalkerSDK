#include "QuestConditionInventoryType.h"

UQuestConditionInventoryType::UQuestConditionInventoryType() {
    this->PauseType = EInventoryPauseType::OwnsItems;
    this->ExpectedResult = EInventoryPauseExpectedResultType::ItemsFound;
    this->bAny = false;
}


