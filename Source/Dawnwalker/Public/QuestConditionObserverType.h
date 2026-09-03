#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionObserverType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionObserverType : public UQuestConditionType {
    GENERATED_BODY()
public:
    UQuestConditionObserverType();

};

