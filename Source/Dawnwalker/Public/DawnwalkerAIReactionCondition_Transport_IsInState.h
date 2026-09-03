#pragma once
#include "CoreMinimal.h"
#include "RebelAIReactionCondition.h"
#include "ERebelFormationState.h"
#include "DawnwalkerAIReactionCondition_Transport_IsInState.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_Transport_IsInState : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelFormationState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    FDawnwalkerAIReactionCondition_Transport_IsInState();
};

