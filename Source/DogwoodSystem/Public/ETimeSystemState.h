#pragma once
#include "CoreMinimal.h"
#include "ETimeSystemState.generated.h"

UENUM(BlueprintType)
enum class ETimeSystemState : uint8 {
    Normal,
    PhaseChangeRequested,
    PhaseChangeInProgress,
};

