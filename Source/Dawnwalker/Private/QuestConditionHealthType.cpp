#include "QuestConditionHealthType.h"

UQuestConditionHealthType::UQuestConditionHealthType() {
    this->Condition = EConditionCheckType::EVCT_LessEqual;
    this->TestType = EConditionTestType::ECTT_AbsoluteValue;
    this->AbsoluteValue = 0.00f;
    this->Percentage = -1.00f;
    this->bAllowedDuringFocusAbility = false;
}

void UQuestConditionHealthType::OnTargetHealthChanged(float NewValue, float OldValue) {
}

void UQuestConditionHealthType::OnFocusAbilityFinished(UFocusAbilityBase* CombatFocusAbility) {
}

void UQuestConditionHealthType::OnDied() {
}


