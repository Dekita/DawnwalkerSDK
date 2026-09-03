#pragma once
#include "CoreMinimal.h"
#include "TorchStateDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTorchStateDelegate, bool, bNewTorchState);

