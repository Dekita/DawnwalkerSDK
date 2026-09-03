#include "QuestConditionSpawnType.h"

UQuestConditionSpawnType::UQuestConditionSpawnType() {
    this->Definition = NULL;
    this->Condition = ESpawnCondition::Spawned;
}

TArray<FString> UQuestConditionSpawnType::GetEntryNameOptions() const {
    return TArray<FString>();
}


