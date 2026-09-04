#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAI_WithStub_Payload.h"
#include "RebelAI_TicketChanged_Payload.generated.h"

class URebelAIStub;

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAI_TicketChanged_Payload : public FRebelAI_WithStub_Payload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TicketTypeTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Provider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URebelAIStub* Holder;
    
    FRebelAI_TicketChanged_Payload();
};

