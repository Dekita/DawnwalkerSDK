#pragma once
#include "CoreMinimal.h"
#include "OnTargetedStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTargetedStateChangedDelegate, bool, bIsTargeted);

