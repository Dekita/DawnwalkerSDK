#pragma once
#include "CoreMinimal.h"
#include "QuestConditionItemFilter.h"
#include "QuestConditionItemFilter_BloodConsumable.generated.h"

USTRUCT(BlueprintType)
struct FQuestConditionItemFilter_BloodConsumable : public FQuestConditionItemFilter {
    GENERATED_BODY()
public:
    DAWNWALKER_API FQuestConditionItemFilter_BloodConsumable();
};

