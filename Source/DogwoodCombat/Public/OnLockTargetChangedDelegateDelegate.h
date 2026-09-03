#pragma once
#include "CoreMinimal.h"
#include "OnLockTargetChangedDelegateDelegate.generated.h"

class UCombatComponentBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnLockTargetChangedDelegate, UCombatComponentBase*, InTarget);

