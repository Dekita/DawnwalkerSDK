#pragma once
#include "CoreMinimal.h"
#include "EReductionPerformanceMode.generated.h"

UENUM(BlueprintType)
enum class EReductionPerformanceMode : uint8 {
    AllFeatures,
    HighPerformance,
};

