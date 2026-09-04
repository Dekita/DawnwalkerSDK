#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_HasAnyHostile.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_HasAnyHostile : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_HasAnyHostile();
};

