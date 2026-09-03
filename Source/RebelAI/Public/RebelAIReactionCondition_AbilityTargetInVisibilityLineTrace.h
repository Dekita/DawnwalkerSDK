#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_AbilityTargetInVisibilityLineTrace.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_AbilityTargetInVisibilityLineTrace : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_AbilityTargetInVisibilityLineTrace();
};

