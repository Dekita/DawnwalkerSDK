#pragma once
#include "CoreMinimal.h"
#include "OnTicketStateChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTicketStateChanged, bool, bHasTicket);

