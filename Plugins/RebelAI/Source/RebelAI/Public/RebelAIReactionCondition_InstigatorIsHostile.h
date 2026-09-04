#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_InstigatorIsHostile.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorIsHostile : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorIsHostile();
};

