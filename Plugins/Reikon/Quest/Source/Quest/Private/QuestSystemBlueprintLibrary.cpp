#include "QuestSystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UQuestSystemBlueprintLibrary::UQuestSystemBlueprintLibrary() {
}

void UQuestSystemBlueprintLibrary::StartSketch(UQuestSystemInterface* QuestSystemInterface, TSubclassOf<UQuestSketch> QuestClass, UQuestOwnerInfo* OwnerInfo) {
}

UJournal* UQuestSystemBlueprintLibrary::GetJournal(UQuestSystemInterface* QuestSystemInterface) {
    return NULL;
}

UFactsDB* UQuestSystemBlueprintLibrary::GetFactsDB(UQuestSystemInterface* QuestSystemInterface) {
    return NULL;
}


