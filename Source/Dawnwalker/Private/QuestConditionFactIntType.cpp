#include "QuestConditionFactIntType.h"

UQuestConditionFactIntType::UQuestConditionFactIntType() {
    this->Condition = EConditionCheckType::EVCT_Greater;
    this->Value = 0;
}

void UQuestConditionFactIntType::ObservedFactChanged(FGameplayTag& FactName, bool BoolValue, int32 IntValue, float FloatValue) {
}


