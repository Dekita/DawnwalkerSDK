#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_Filter.h"
#include "RebelAILogicNode_Filter_CanGiveTicket.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Filter_CanGiveTicket : public FRebelAILogicNode_Filter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TicketTypeTag;
    
    FRebelAILogicNode_Filter_CanGiveTicket();
};

