#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAITrait.h"
#include "RebelAITrait_TicketBoard.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAITrait_TicketBoard : public FRebelAITrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, uint8> TicketConfiguration;
    
    FRebelAITrait_TicketBoard();
};

