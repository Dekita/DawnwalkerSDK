#pragma once
#include "CoreMinimal.h"
#include "OnTicketLostDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTicketLost, URebelAIStub*, Loser);

