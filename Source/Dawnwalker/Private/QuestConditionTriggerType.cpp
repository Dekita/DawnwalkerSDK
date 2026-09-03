#include "QuestConditionTriggerType.h"

UQuestConditionTriggerType::UQuestConditionTriggerType() {
    this->TimeProgressionType = EQuestTimeProgressionType::None;
}

void UQuestConditionTriggerType::OnTriggerEvent(const APawn* Pawn) {
}

TArray<FName> UQuestConditionTriggerType::GetConditionNames() const {
    return TArray<FName>();
}


