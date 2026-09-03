#pragma once
#include "CoreMinimal.h"
#include "ECounterAttackType.generated.h"

UENUM(BlueprintType)
enum class ECounterAttackType : uint8 {
    AfterDodge,
    AfterParry,
    NoEscape,
    DefaultCounterAttack,
    None,
};

