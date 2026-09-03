#include "QuestConditionCharacterMovementModeWalkingType.h"

UQuestConditionCharacterMovementModeWalkingType::UQuestConditionCharacterMovementModeWalkingType() {
    this->ExpectedResult = EMovementModeWalkingTestExpectedResult::OnTheGround;
}

void UQuestConditionCharacterMovementModeWalkingType::OnMovementModeChanged(ACharacter* Character, TEnumAsByte<EMovementMode> PrevMovementMode, uint8 PreviousCustomMode) {
}


