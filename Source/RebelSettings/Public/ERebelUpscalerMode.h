#pragma once
#include "CoreMinimal.h"
#include "ERebelUpscalerMode.generated.h"

UENUM(BlueprintType)
enum class ERebelUpscalerMode : uint8 {
    NativeAA,
    DLAA,
    UltraQualityPlus,
    UltraQuality,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
    MAX,
};

