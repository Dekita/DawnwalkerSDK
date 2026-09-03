#pragma once
#include "CoreMinimal.h"
#include "EFocusAbilityStatType.generated.h"

UENUM(BlueprintType)
enum class EFocusAbilityStatType : uint8 {
    None,
    Damage,
    DamagePerSecond,
    LifestealPerSecond,
};

