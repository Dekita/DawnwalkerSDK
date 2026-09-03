#include "QuestConditionAlertLevelType.h"

UQuestConditionAlertLevelType::UQuestConditionAlertLevelType() {
    this->AlertValue = 0;
    this->AlertStage = EAlertStage::Medium;
    this->Condition = EConditionCheckType::EVCT_Equal;
    this->ConditionType = EAlertConditionType::Stage;
}

void UQuestConditionAlertLevelType::OnAlertLevelChanged(FAlertLevelChangeInfo AlertLevelChange) {
}


