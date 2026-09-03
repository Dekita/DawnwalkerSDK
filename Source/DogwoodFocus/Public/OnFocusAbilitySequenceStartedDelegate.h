#pragma once
#include "CoreMinimal.h"
#include "OnFocusAbilitySequenceStartedDelegate.generated.h"

class UFocusAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusAbilitySequenceStarted, UFocusAbilityBase*, CombatFocusAbility);

