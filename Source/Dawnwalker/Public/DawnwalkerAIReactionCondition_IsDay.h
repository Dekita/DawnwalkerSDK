#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsDay.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsDay : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerAIReactionCondition_IsDay();
};

