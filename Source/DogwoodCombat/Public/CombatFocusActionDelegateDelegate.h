#pragma once
#include "CoreMinimal.h"
#include "CombatFocusActionDelegateDelegate.generated.h"

class UFocusAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCombatFocusActionDelegate, UFocusAbilityBase*, Ability);

