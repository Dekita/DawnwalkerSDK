#pragma once
#include "CoreMinimal.h"
#include "ETraitWorkingPhase.generated.h"

UENUM(BlueprintType)
enum class ETraitWorkingPhase : uint8 {
    None,
    Daytime,
    Nighttime,
    Shared = 4,
};

