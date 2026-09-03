#pragma once
#include "CoreMinimal.h"
#include "OnHardLockTargetDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHardLockTarget, bool, bEnabled);

