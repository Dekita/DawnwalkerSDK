#pragma once
#include "CoreMinimal.h"
#include "ECombatConditionType.generated.h"

UENUM(BlueprintType)
enum class ECombatConditionType : uint8 {
    CombatBegins,
    CombatEnds,
    InCombat,
    OutOfCombat,
};

