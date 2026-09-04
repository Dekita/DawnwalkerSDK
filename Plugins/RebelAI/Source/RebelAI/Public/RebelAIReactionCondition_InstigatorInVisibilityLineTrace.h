#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_InstigatorInVisibilityLineTrace.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorInVisibilityLineTrace : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorInVisibilityLineTrace();
};

