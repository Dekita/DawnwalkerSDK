#pragma once
#include "CoreMinimal.h"
#include "ECombatFocusTargetingType.generated.h"

UENUM(BlueprintType)
enum class ECombatFocusTargetingType : uint8 {
    Single,
    Self,
    All,
    AoE,
};

