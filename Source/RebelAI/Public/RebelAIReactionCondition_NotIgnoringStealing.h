#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_NotIgnoringStealing.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_NotIgnoringStealing : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_NotIgnoringStealing();
};

