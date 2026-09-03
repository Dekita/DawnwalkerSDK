#pragma once
#include "CoreMinimal.h"
#include "EFFXFSR4QualityMode.generated.h"

UENUM()
enum class EFFXFSR4QualityMode : int32 {
    NativeAA,
    Quality,
    Balanced,
    Performance,
    UltraPerformance,
};

