#pragma once
#include "CoreMinimal.h"
#include "QuestNode.h"
#include "QuestNodeConditionBased.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODQUEST_API UQuestNodeConditionBased : public UQuestNode {
    GENERATED_BODY()
public:
    UQuestNodeConditionBased();

};

