#include "QuestNodeSpawnBase.h"

UQuestNodeSpawnBase::UQuestNodeSpawnBase() {
    this->Inputs.AddDefaulted(1);
    this->Definition = NULL;
}

TArray<FString> UQuestNodeSpawnBase::GetEntryNameOptions() const {
    return TArray<FString>();
}


