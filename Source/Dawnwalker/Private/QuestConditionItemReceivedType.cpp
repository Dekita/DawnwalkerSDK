#include "QuestConditionItemReceivedType.h"

UQuestConditionItemReceivedType::UQuestConditionItemReceivedType() {
    this->Item = NULL;
    this->Quantity = 1;
    this->Condition = EConditionCheckType::EVCT_GreaterEqual;
}


