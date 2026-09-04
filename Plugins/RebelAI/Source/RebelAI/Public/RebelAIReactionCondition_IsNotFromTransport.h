#pragma once
#include "CoreMinimal.h"
#include "ERebelAIReactionCondition_CheckTarget.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_IsNotFromTransport.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_IsNotFromTransport : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIReactionCondition_CheckTarget CheckTarget;
    
    FRebelAIReactionCondition_IsNotFromTransport();
};

