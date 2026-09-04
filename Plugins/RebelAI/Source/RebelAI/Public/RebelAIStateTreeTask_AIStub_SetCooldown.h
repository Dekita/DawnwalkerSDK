#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAIIdentificationMode.h"
#include "ERebelAIStateTreeTask_AIStub_SetTagCooldown_ApplicationTime.h"
#include "RebelAIStateTreeTask_AIStub.h"
#include "RebelAIStateTreeTask_AIStub_SetCooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIStateTreeTask_AIStub_SetCooldown : public FRebelAIStateTreeTask_AIStub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIStateTreeTask_AIStub_SetTagCooldown_ApplicationTime ApplicationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIIdentificationMode CooldownIdentificationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CooldownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToExisting;
    
    FRebelAIStateTreeTask_AIStub_SetCooldown();
};

