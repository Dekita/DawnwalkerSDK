#pragma once
#include "CoreMinimal.h"
#include "OnAnyEventReceivedDelegateDelegate.generated.h"

class UBaseEvent;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAnyEventReceivedDelegate, UBaseEvent*, ReceivedEvent);

