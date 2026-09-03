#pragma once
#include "CoreMinimal.h"
#include "QuestConditionType.h"
#include "QuestConditionDaysPassedBaseType.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class DAWNWALKER_API UQuestConditionDaysPassedBaseType : public UQuestConditionType {
    GENERATED_BODY()
public:
    UQuestConditionDaysPassedBaseType();

};

