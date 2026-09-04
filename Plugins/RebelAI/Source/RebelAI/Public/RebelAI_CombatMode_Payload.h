#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_CombatMode_Payload.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_CombatMode_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CombatModeTag;
    
    FRebelAI_CombatMode_Payload();
};

