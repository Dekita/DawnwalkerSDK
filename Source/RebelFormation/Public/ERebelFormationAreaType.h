#pragma once
#include "CoreMinimal.h"
#include "ERebelFormationAreaType.generated.h"

UENUM(BlueprintType)
enum class ERebelFormationAreaType : uint8 {
    Alert,
    Guard,
    HardGuard,
    CombatArea,
    ActivationArea,
};

