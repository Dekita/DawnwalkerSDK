#include "QuestConditionGameHUBType.h"

UQuestConditionGameHUBType::UQuestConditionGameHUBType() {
    this->PauseUntil = EHubPanelConditionType::Opened;
    this->bAnyTab = false;
}

void UQuestConditionGameHUBType::OnTabActiveChanged() {
}


