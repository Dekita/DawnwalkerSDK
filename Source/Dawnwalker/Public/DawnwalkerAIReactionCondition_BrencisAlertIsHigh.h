#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_BrencisAlertIsHigh.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_BrencisAlertIsHigh : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FDawnwalkerAIReactionCondition_BrencisAlertIsHigh();
};

