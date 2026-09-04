#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_IsPlayerNearInstigator.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_IsPlayerNearInstigator : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRebelAIReactionCondition_IsPlayerNearInstigator();
};

