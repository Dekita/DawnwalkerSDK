#pragma once
#include "CoreMinimal.h"
#include "ERebelUpscalerType.generated.h"

UENUM(BlueprintType)
enum class ERebelUpscalerType : uint8 {
    None,
    TSR,
    DLSS,
    FSR,
    XeSS,
    MAX,
};

