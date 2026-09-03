#include "QuestConditionTimeProgressionZoneType.h"

UQuestConditionTimeProgressionZoneType::UQuestConditionTimeProgressionZoneType() {
    this->ConditionType = ETimeProgressionZoneConditionType::Entered;
    this->bAcceptManual = false;
}

void UQuestConditionTimeProgressionZoneType::OnTriggerNoticeStateUpdated(bool bActive, EQuestTimeProgressionType TimeProgressionType, bool bManual) {
}


