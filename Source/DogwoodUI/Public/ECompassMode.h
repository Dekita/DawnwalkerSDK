#pragma once
#include "CoreMinimal.h"
#include "ECompassMode.generated.h"

UENUM(BlueprintType)
enum class ECompassMode : uint8 {
    Default,
    PinArea,
    RestrictedArea,
    Combat,
    RestrictedAreaPreCombat,
    RestrictedAreaPreCombatAggressive,
};

