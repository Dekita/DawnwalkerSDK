#include "RebelAITicketsController.h"

URebelAITicketsController::URebelAITicketsController() {
}

void URebelAITicketsController::RestoreAllTickets(URebelAIStub* Requester) {
}

bool URebelAITicketsController::BP_RestoreTicket(const FGameplayTag& TicketType, URebelAIStub* Requester, TScriptInterface<IRebelAITicketBoardOwnerInterface> TicketBoardOwner) {
    return false;
}

bool URebelAITicketsController::BP_RequestTicket(const FGameplayTag& TicketType, URebelAIStub* Requester, TScriptInterface<IRebelAITicketBoardOwnerInterface> TicketBoardOwner) {
    return false;
}


