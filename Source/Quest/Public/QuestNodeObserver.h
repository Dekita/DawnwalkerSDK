#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeObserver.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeObserver : public UQuestNode {
    GENERATED_BODY()
public:
    UQuestNodeObserver();

};

