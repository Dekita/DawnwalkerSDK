#include "ItemChoiceCondition.h"

UItemChoiceCondition::UItemChoiceCondition() {
    this->Condition = EItemConditionType::HasAll;
    this->Item = NULL;
}


