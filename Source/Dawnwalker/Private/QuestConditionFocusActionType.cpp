#include "QuestConditionFocusActionType.h"

UQuestConditionFocusActionType::UQuestConditionFocusActionType() {
    this->PauseUntil = EFocusActionConditionType::StartFocusMode;
    this->bFullyCharged = false;
    this->ChargedSlots = 1.00f;
}

void UQuestConditionFocusActionType::OnReEvaluateCondition() {
}

void UQuestConditionFocusActionType::OnFocusTargetChanged(const AActor* InTargetActor) {
}

void UQuestConditionFocusActionType::OnFocusAction(const UFocusAbilityBase* InAbility) {
}

void UQuestConditionFocusActionType::OnConditionTriggered() {
}


