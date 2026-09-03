#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentMode.generated.h"

UENUM(BlueprintType)
enum class ECharacterDevelopmentMode : uint8 {
    None,
    Shared,
    Human,
    Vampire = 4,
    CombatFocus = 8,
};

