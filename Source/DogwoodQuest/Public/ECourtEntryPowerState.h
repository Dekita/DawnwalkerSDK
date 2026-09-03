#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryPowerState.generated.h"

UENUM(BlueprintType)
enum class ECourtEntryPowerState : uint8 {
    Full,
    Mid,
    Low,
    Depleted,
};

