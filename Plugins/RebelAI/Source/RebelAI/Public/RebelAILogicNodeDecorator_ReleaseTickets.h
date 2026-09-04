#pragma once
#include "CoreMinimal.h"
#include "ERebelAILogicNodeDecorator_ReleaseTicket_Mode.h"
#include "RebelAILogicNodeDecorator.h"
#include "RebelAILogicNodeDecorator_ReleaseTickets.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAILogicNodeDecorator_ReleaseTickets : public FRebelAILogicNodeDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelAILogicNodeDecorator_ReleaseTicket_Mode Mode;
    
    FRebelAILogicNodeDecorator_ReleaseTickets();
};

