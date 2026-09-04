#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_AbilityCommited_Payload.generated.h"

class UGameplayAbility;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_AbilityCommited_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AbilityTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UGameplayAbility> Ability;
    
    FRebelAI_AbilityCommited_Payload();
};

