#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAIIdentificationMode.h"
#include "ERebelAILogicNodeDecorator_SetCooldown_CooldownApplyMode.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_SetCooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_SetCooldown : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAIIdentificationMode CooldownIdentificationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CooldownName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CooldownTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CooldownDeflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNodeDecorator_SetCooldown_CooldownApplyMode CooldownApplyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostActivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToExisting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddAdditionalCooldownPerDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AdditionalAIvsAIDuration;
    
    FRebelAILogicNodeDecorator_SetCooldown();
};

