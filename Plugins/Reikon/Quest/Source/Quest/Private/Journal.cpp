#include "Journal.h"

UJournal::UJournal() {
}

bool UJournal::TrackQuestObjective(UQuest* QuestToTrack, const FGuid& ObjectiveToTrack) {
    return false;
}

bool UJournal::TrackQuest(UQuest* QuestToTrack) {
    return false;
}

bool UJournal::IsObjectiveTimeTracked(const FGuid& ObjectiveID) const {
    return false;
}

UQuest* UJournal::GetTrackedQuest() const {
    return NULL;
}

FGuid UJournal::GetTrackedObjectiveGuid() const {
    return FGuid{};
}

UQuest* UJournal::GetTrackedMainQuest() const {
    return NULL;
}

FGuid UJournal::GetTrackedMainObjectiveGuid() const {
    return FGuid{};
}

TArray<FGuid> UJournal::GetTrackableObjectiveGuids(const UQuest* FromQuest) const {
    return TArray<FGuid>();
}

int32 UJournal::GetTrackableObjectiveCount(const UQuest* FromQuest) const {
    return 0;
}

void UJournal::GetQuests(EQuestState State, TArray<UQuest*>& OutQuests) const {
}

void UJournal::GetOpenedQuestsOfNewType(ENewQuestType Type, TArray<UQuest*>& OutQuests) const {
}

void UJournal::GetOpenedQuests(TArray<UQuest*>& OutQuests) const {
}

UQuest* UJournal::FindQuestInstanceUsingAsset(const UQuest* QuestAssetPtr) {
    return NULL;
}


