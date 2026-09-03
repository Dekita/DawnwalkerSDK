#include "BrencisAlertLevelPopulationAreaConditionType.h"

UBrencisAlertLevelPopulationAreaConditionType::UBrencisAlertLevelPopulationAreaConditionType() {
    this->AlertStage = EAlertStage::Medium;
    this->Condition = EConditionCheckType::EVCT_Equal;
}

void UBrencisAlertLevelPopulationAreaConditionType::OnAlertLevelChanged(FAlertLevelChangeInfo AlertLevelChange) {
}


