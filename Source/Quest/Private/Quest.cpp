#include "Quest.h"

UQuest::UQuest() {
    this->NewType = ENewQuestType::Story;
    this->StartSpotMappinReference = NULL;
    this->DayPhase = EObjectiveDayPhase::DayAndNight;
    this->State = EQuestState::EQS_Init;
    this->ChosenQuestEnding = 0;
    this->QuestAssetPtr = NULL;
}

TArray<FObjective> UQuest::SortObjectivesByTimeRevealed() {
    return TArray<FObjective>();
}

bool UQuest::IsObjectiveExisting(const FGuid& Guid) const {
    return false;
}

FObjective UQuest::GetObjectiveBy(const FGuid& Guid) {
    return FObjective{};
}

FGuid UQuest::GetId() const {
    return FGuid{};
}

bool UQuest::GetChosenQuestEndingDescription(FText& OutDescription) {
    return false;
}

void UQuest::DebugLogQuestIds() {
}


