#pragma once
#include "CoreMinimal.h"
#include "OnTicketReceivedDelegate.generated.h"

class URebelAIStub;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTicketReceived, URebelAIStub*, Receiver);

