#include "QuestConditionNPCAttitudeType.h"

UQuestConditionNPCAttitudeType::UQuestConditionNPCAttitudeType() {
    this->Attitude = ECharacterAttitude::Aggressive;
}

void UQuestConditionNPCAttitudeType::OnNPCAttitudeChanged(const ECharacterAttitude NewAttitude) {
}


