#pragma once
#include "CoreMinimal.h"
#include "RebelAIBoardFragment.h"
#include "RebelAIBoardFragment_TicketUser.generated.h"

USTRUCT(BlueprintType)
struct REBELAI_API FRebelAIBoardFragment_TicketUser : public FRebelAIBoardFragment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTicket;
    
    FRebelAIBoardFragment_TicketUser();
};

