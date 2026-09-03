#pragma once
#include "CoreMinimal.h"
#include "EDoorState.generated.h"

UENUM(BlueprintType)
enum class EDoorState : uint8 {
    Open,
    OpenEvenInCombat,
    Locked,
    KeyLocked,
    TimeOpenByDay,
    TimeOpenByNight,
    Disabled,
    Invalid,
};

