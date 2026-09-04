#pragma once
#include "CoreMinimal.h"
#include "ERebelAIAttitude.h"
#include "ERebelAIReactionCondition_CheckTarget.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_RelationCheck.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_RelationCheck : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIReactionCondition_CheckTarget Checker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIReactionCondition_CheckTarget CheckTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIAttitude Attitude;
    
    FRebelAIReactionCondition_RelationCheck();
};

