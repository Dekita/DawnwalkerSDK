#include "QuestJournalBlueprintLibrary.h"

UQuestJournalBlueprintLibrary::UQuestJournalBlueprintLibrary() {
}

bool UQuestJournalBlueprintLibrary::IsQuestFinished(const UObject* InWorldContextObject, const UQuest* InQuestAsset, bool bSuccessfulOnly) {
    return false;
}

bool UQuestJournalBlueprintLibrary::IsQuestActive(const UObject* InWorldContextObject, const UQuest* InQuestAsset) {
    return false;
}

UQuest* UQuestJournalBlueprintLibrary::GetQuestByID(UQuestJournalInterface* QuestJournalInterface, const FGuid& InGuid) {
    return NULL;
}


