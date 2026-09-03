#pragma once
#include "CoreMinimal.h"
#include "EOutputColorSpace.generated.h"

UENUM(BlueprintType)
enum class EOutputColorSpace : uint8 {
    Undefined,
    Linear,
    sRGB,
};

