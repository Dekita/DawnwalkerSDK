#pragma once
#include "CoreMinimal.h"
#include "ECombatState.h"
#include "OnStateChangedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnStateChangedDelegate, const ECombatState, NewState);

