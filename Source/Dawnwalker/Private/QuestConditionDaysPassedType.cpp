#include "QuestConditionDaysPassedType.h"

UQuestConditionDaysPassedType::UQuestConditionDaysPassedType() {
    this->Operator = EComparisonOperator::GreaterOrEqual;
    this->Day = 1;
}


