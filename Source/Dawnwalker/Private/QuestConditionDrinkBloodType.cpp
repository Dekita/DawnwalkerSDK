#include "QuestConditionDrinkBloodType.h"

UQuestConditionDrinkBloodType::UQuestConditionDrinkBloodType() {
    this->bAnyTarget = false;
    this->ReferenceFilter = NULL;
    this->PauseUntil = EDrinkBloodConditionType::Enter;
}


