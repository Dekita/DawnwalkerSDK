#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAIReactionCondition.h"
#include "RebelAIReactionCondition_SignaledBySituation.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIReactionCondition_SignaledBySituation : public FRebelAIReactionCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvert;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Situation;
    
    FRebelAIReactionCondition_SignaledBySituation();
};

