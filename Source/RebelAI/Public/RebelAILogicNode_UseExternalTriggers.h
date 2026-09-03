#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ERebelAILogicNode_Trigger_RegistrationMode.h"
#include "RebelAILogicNode_Registrable.h"
#include "RebelAILogicNode_UseExternalTriggers.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_UseExternalTriggers : public FRebelAILogicNode_Registrable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNode_Trigger_RegistrationMode RegistrationMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ReactionsType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag FallbackReactionsType;
    
    FRebelAILogicNode_UseExternalTriggers();
};

