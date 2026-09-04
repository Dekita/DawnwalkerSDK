#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAI_Attack_Payload.h"
#include "RebelAI_AttackDefended_Payload.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_AttackDefended_Payload : public FRebelAI_Attack_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Defender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag DefenseType;
    
    FRebelAI_AttackDefended_Payload();
};

