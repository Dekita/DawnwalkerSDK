#pragma once
#include "CoreMinimal.h"
#include "QuestConditionInteractionType.h"
#include "QuestConditionLootableType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionLootableType : public UQuestConditionInteractionType {
    GENERATED_BODY()
public:
    UQuestConditionLootableType();

};

