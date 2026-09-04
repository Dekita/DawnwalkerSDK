#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition_InstigatorMovingIntoMyDirection.h"
#include "RebelAIReactionCondition_InstigatorNotMovingIntoMyDirection.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_InstigatorNotMovingIntoMyDirection : public FRebelAIReactionCondition_InstigatorMovingIntoMyDirection {
    GENERATED_BODY()
public:
    FRebelAIReactionCondition_InstigatorNotMovingIntoMyDirection();
};

