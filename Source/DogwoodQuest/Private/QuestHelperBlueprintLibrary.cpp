#include "QuestHelperBlueprintLibrary.h"

UQuestHelperBlueprintLibrary::UQuestHelperBlueprintLibrary() {
}

void UQuestHelperBlueprintLibrary::QuestPing(UQuestHelperImpl* QuestHelper, FName Name) {
}

UPaperSprite* UQuestHelperBlueprintLibrary::GetQuestIcon(UObject* WorldContextObject, UQuest* Quest, bool IsTracked) {
    return NULL;
}

FGameplayTag UQuestHelperBlueprintLibrary::GetQuestCourtTag(UQuest* Quest) {
    return FGameplayTag{};
}


