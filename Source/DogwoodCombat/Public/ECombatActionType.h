#pragma once
#include "CoreMinimal.h"
#include "ECombatActionType.generated.h"

UENUM(BlueprintType)
enum class ECombatActionType : uint8 {
    None,
    Offensive,
    Defensive,
    Movement,
};

