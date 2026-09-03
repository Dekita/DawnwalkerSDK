#pragma once
#include "CoreMinimal.h"
#include "LeftCombatDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeftCombatDelegate, bool, bPlayerWon);

