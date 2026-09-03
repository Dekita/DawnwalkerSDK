#pragma once
#include "CoreMinimal.h"
#include "EInvestigationState.generated.h"

UENUM(BlueprintType)
enum class EInvestigationState : uint8 {
    None,
    Inspecting,
    PointCharging,
};

