#include "QuestConditionMappinVisibilityType.h"

UQuestConditionMappinVisibilityType::UQuestConditionMappinVisibilityType() {
    this->MappinType = EMappinType::None;
}

void UQuestConditionMappinVisibilityType::OnMappinAddedToCompass(int64 ID, EMappinType Type, EMappinState State, bool bEnabled, FVector Location) {
}


