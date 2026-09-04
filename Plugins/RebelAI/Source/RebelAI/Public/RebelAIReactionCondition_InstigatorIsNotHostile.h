#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition_InstigatorIsHostile.h"
#include "RebelAIReactionCondition_InstigatorIsNotHostile.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorIsNotHostile : public FRebelAIReactionCondition_InstigatorIsHostile {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorIsNotHostile();
};

