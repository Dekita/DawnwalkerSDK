#pragma once
#include "CoreMinimal.h"
#include "EBiomesBrushShape.generated.h"

UENUM(BlueprintType)
enum class EBiomesBrushShape : uint8 {
    Circle,
    Stamp,
    Tiling,
    Max,
};

