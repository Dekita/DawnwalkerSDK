#include "QuestConditionChapelPanelType.h"

UQuestConditionChapelPanelType::UQuestConditionChapelPanelType() {
    this->PauseUntil = EChapelPanelConditionType::Opened;
}

void UQuestConditionChapelPanelType::OnWidgetOpened() {
}

void UQuestConditionChapelPanelType::OnPanelActiveChanged(const FGameplayTag& ChapelPanelTag, const bool bActive) {
}

void UQuestConditionChapelPanelType::OnChapelDialogueResult(EChapelDialogueResult Result) {
}


