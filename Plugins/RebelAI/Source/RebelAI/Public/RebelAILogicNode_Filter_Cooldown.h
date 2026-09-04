#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAIIdentificationMode.h"
#include "RebelAILogicNode_FilterBase.h"
#include "RebelAILogicNode_Filter_Cooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_Cooldown : public FRebelAILogicNode_FilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIIdentificationMode CooldownIdentificationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CooldownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    FRebelAILogicNode_Filter_Cooldown();
};

