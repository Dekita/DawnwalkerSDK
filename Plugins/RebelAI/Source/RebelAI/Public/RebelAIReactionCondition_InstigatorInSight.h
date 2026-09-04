#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_InstigatorInSight.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorInSight : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorInSight();
};

