#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeDeletionMarker.generated.h"

UCLASS(Blueprintable)
class QUEST_API UQuestNodeDeletionMarker : public UQuestNode {
    GENERATED_BODY()
public:
    UQuestNodeDeletionMarker();

};

