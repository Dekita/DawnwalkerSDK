#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeActionBase.generated.h"

UCLASS(Abstract, Blueprintable)
class QUEST_API UQuestNodeActionBase : public UQuestNode {
    GENERATED_BODY()
public:
    UQuestNodeActionBase();

};

