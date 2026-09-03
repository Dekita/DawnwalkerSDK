#pragma once
#include "CoreMinimal.h"
#include "ECombatDamageType.generated.h"

UENUM(BlueprintType)
enum class ECombatDamageType : uint8 {
    None,
    Health,
    Stability,
};

