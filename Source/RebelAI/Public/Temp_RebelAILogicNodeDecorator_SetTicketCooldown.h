#pragma once
#include "CoreMinimal.h"
#include "FTemp_ETicketCooldown.h"
#include "RebelAILogicNodeDecorator_SetCooldown.h"
#include "Temp_RebelAILogicNodeDecorator_SetTicketCooldown.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FTemp_RebelAILogicNodeDecorator_SetTicketCooldown : public FRebelAILogicNodeDecorator_SetCooldown {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTemp_ETicketCooldown CooldownType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseConfigOfTargetsAttacker;
    
    FTemp_RebelAILogicNodeDecorator_SetTicketCooldown();
};

