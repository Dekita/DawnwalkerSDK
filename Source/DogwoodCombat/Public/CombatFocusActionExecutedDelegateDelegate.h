#pragma once
#include "CoreMinimal.h"
#include "CombatFocusActionExecutedDelegateDelegate.generated.h"

class UFocusAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCombatFocusActionExecutedDelegate, int32, ExecutionIndex, UFocusAbilityBase*, Ability);

