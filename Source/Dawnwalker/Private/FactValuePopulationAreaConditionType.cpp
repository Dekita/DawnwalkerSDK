#include "FactValuePopulationAreaConditionType.h"

UFactValuePopulationAreaConditionType::UFactValuePopulationAreaConditionType() {
    this->Condition = EConditionCheckType::EVCT_Greater;
    this->Value = 0;
}

void UFactValuePopulationAreaConditionType::OnFactChanged(FGameplayTag& FactName, int32 IntValue) {
}


