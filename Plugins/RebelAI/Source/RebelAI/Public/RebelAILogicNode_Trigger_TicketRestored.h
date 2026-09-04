#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "RebelAILogicNode_Trigger_EventBased.h"
#include "RebelAILogicNode_Trigger_TicketRestored.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Trigger_TicketRestored : public FRebelAILogicNode_Trigger_EventBased {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TicketTypeTag;
    
    FRebelAILogicNode_Trigger_TicketRestored();
};

