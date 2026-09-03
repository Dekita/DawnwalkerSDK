#pragma once
#include "CoreMinimal.h"
#include "OnFatiguedStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFatiguedStateChangedDelegate, bool, bEntered);

