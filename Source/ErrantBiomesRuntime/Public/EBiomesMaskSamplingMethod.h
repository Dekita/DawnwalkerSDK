#pragma once
#include "CoreMinimal.h"
#include "EBiomesMaskSamplingMethod.generated.h"

UENUM(BlueprintType)
enum class EBiomesMaskSamplingMethod : uint8 {
    Bilinear,
    NearestPoint,
};

