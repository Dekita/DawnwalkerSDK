#pragma once
#include "CoreMinimal.h"
#include "OnWeightExceededChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnWeightExceededChanged, const bool, bHasExceeded);

