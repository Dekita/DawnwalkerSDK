#pragma once
#include "CoreMinimal.h"
#include "OnFocusAbilitySequenceFinishedDelegate.generated.h"

class UFocusAbilityBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusAbilitySequenceFinished, UFocusAbilityBase*, CombatFocusAbility);

