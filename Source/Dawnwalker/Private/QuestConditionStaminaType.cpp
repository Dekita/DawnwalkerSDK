#include "QuestConditionStaminaType.h"

UQuestConditionStaminaType::UQuestConditionStaminaType() {
    this->Condition = EConditionCheckType::EVCT_LessEqual;
    this->TestType = EConditionTestType::ECTT_AbsoluteValue;
    this->AbsoluteValue = 0.00f;
    this->Percentage = 0.00f;
}

void UQuestConditionStaminaType::OnTargetStaminaChanged(float NewValue, float OldValue) {
}


