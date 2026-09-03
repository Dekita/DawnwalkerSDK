#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "OnTicketLostDelegate.h"
#include "OnTicketReceivedDelegate.h"
#include "RebelAIControllerBase.h"
#include "RebelAITicketsController.generated.h"

class IRebelAITicketBoardOwnerInterface;
class URebelAITicketBoardOwnerInterface;
class URebelAIStub;

UCLASS(Blueprintable)
class REBELAI_API URebelAITicketsController : public URebelAIControllerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTicketReceived OnTicketReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTicketLost OnTicketLost;
    
    URebelAITicketsController();

    UFUNCTION(BlueprintCallable)
    void RestoreAllTickets(URebelAIStub* Requester);
    
    UFUNCTION(BlueprintCallable)
    bool BP_RestoreTicket(const FGameplayTag& TicketType, URebelAIStub* Requester, TScriptInterface<IRebelAITicketBoardOwnerInterface> TicketBoardOwner);
    
    UFUNCTION(BlueprintCallable)
    bool BP_RequestTicket(const FGameplayTag& TicketType, URebelAIStub* Requester, TScriptInterface<IRebelAITicketBoardOwnerInterface> TicketBoardOwner);
    
};

