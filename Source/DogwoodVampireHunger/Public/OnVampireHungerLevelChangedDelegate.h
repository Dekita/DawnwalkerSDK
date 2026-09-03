#pragma once
#include "CoreMinimal.h"
#include "EVampireHunger.h"
#include "OnVampireHungerLevelChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnVampireHungerLevelChanged, EVampireHunger, VampireHungerLevel);

