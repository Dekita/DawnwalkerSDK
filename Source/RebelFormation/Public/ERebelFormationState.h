#pragma once
#include "CoreMinimal.h"
#include "ERebelFormationState.generated.h"

UENUM(BlueprintType)
enum class ERebelFormationState : uint8 {
    Active,
    Paused,
    InCombat,
    ForceActive,
    ForcePaused,
};

