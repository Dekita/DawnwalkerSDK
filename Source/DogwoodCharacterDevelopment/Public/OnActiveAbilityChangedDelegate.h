#pragma once
#include "CoreMinimal.h"
#include "OnActiveAbilityChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnActiveAbilityChanged, int32, EquipedPassiveAbilities, int32, TotalEquipedAbilities);

