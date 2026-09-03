#pragma once
#include "CoreMinimal.h"
#include "OnTorchRemainingTimeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTorchRemainingTimeChanged, float, RemainingTime);

