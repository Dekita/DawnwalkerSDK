#pragma once
#include "CoreMinimal.h"
#include "EReflectorAlgorithm.generated.h"

UENUM(BlueprintType)
enum class EReflectorAlgorithm : uint8 {
    Closest,
    MeanAverage,
    MeanProjection,
};

