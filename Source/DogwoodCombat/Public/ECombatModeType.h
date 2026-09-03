#pragma once
#include "CoreMinimal.h"
#include "ECombatModeType.generated.h"

UENUM(BlueprintType)
enum class ECombatModeType : uint8 {
    None,
    VampireSword,
    Sword,
    VampireHandToHand,
    HandToHand,
    Fistfight,
};

