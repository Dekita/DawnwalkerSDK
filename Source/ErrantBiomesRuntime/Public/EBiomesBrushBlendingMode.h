#pragma once
#include "CoreMinimal.h"
#include "EBiomesBrushBlendingMode.generated.h"

UENUM(BlueprintType)
enum class EBiomesBrushBlendingMode : uint8 {
    Replace,
    Add,
    Subtract,
    Multiply,
    Max,
    Min,
};

