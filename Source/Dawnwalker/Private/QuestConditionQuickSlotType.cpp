#include "QuestConditionQuickSlotType.h"

UQuestConditionQuickSlotType::UQuestConditionQuickSlotType() {
    this->QuickSlotType = EQuickSlotType::Inventory;
    this->PauseUntil = EQuickSlotConditionType::SlotBindingStarted;
    this->bRequireUserInput = true;
}


