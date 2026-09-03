#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsNight.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsNight : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerAIReactionCondition_IsNight();
};

