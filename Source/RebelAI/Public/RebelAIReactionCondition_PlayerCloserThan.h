#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_PlayerCloserThan.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_PlayerCloserThan : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    FRebelAIReactionCondition_PlayerCloserThan();
};

