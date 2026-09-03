#pragma once
#include "CoreMinimal.h"
#include "ERebelIndicatorStatePriority.generated.h"

UENUM(BlueprintType)
enum class ERebelIndicatorStatePriority : uint8 {
    None,
    Low,
    Medium,
    High,
    Max,
};

