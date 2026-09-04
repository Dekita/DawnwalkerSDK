#pragma once
#include "CoreMinimal.h"
#include "GameplayAttribute.h"
#include "GameplayTagContainer.h"
#include "EGiveTicketToAttacker_SelectionMethod.h"
#include "RebelAILogicNode_Task.h"
#include "RebelAILogicNode_Task_GiveTicketToAttacker.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNode_Task_GiveTicketToAttacker : public FRebelAILogicNode_Task {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TicketType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGiveTicketToAttacker_SelectionMethod SelectionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute AttributeUsedToSelectNextAttacker;
    
    FRebelAILogicNode_Task_GiveTicketToAttacker();
};

