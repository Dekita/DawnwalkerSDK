#pragma once
#include "CoreMinimal.h"
#include "ERebelAIReactionCondition_CheckTarget.h"
#include "RebelAIReactionCondition.h"
#include "DawnwalkerAIReactionCondition_IsInCombatCheck.generated.h"

USTRUCT(BlueprintType)
struct DAWNWALKER_API FDawnwalkerAIReactionCondition_IsInCombatCheck : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIReactionCondition_CheckTarget CheckTarget;
    
    FDawnwalkerAIReactionCondition_IsInCombatCheck();
};

