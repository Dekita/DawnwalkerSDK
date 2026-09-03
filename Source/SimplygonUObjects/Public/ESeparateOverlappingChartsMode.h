#pragma once
#include "CoreMinimal.h"
#include "ESeparateOverlappingChartsMode.generated.h"

UENUM(BlueprintType)
enum class ESeparateOverlappingChartsMode : uint8 {
    Disabled,
    Enabled,
    Auto,
};

