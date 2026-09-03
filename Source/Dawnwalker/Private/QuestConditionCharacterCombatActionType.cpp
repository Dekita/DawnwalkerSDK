#include "QuestConditionCharacterCombatActionType.h"

UQuestConditionCharacterCombatActionType::UQuestConditionCharacterCombatActionType() {
    this->PauseUntil = ECharacterCombatActionConditionType::QueueAttack;
    this->AllowedCombatStates.AddDefaulted(1);
    this->bMustBeUnblockableAttack = false;
    this->bAnySwingDirection = true;
    this->SwingDirection = EWeaponSwingDirection::Right;
    this->bAnyDefense = true;
    this->ExpectedBlockingDirection = EBlockingDirection::Right;
    this->bHardLocked = true;
}

void UQuestConditionCharacterCombatActionType::ParryWindowOpened(UCombatComponentBase* InTarget) {
}

void UQuestConditionCharacterCombatActionType::OnReEvaluateCondition() {
}

void UQuestConditionCharacterCombatActionType::HardLockChanged(const bool bLocked) {
}

void UQuestConditionCharacterCombatActionType::ForcedFistFightChanged(const bool bForced) {
}

void UQuestConditionCharacterCombatActionType::DirectionalGuardEntered() {
}


