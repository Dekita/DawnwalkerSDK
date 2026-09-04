#pragma once
#include "CoreMinimal.h"
#include "ERebelLocomotionMantleType.generated.h"

UENUM(BlueprintType)
enum class ERebelLocomotionMantleType : uint8 {
    HighMantle,
    LowMantle,
    FallingCatch,
    Vaulting,
    VaultingDown,
};

