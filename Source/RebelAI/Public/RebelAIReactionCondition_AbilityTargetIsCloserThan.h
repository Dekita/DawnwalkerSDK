#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_AbilityTargetIsCloserThan.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_AbilityTargetIsCloserThan : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRebelAIReactionCondition_AbilityTargetIsCloserThan();
};

