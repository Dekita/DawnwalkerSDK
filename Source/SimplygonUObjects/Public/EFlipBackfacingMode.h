#pragma once
#include "CoreMinimal.h"
#include "EFlipBackfacingMode.generated.h"

UENUM(BlueprintType)
enum class EFlipBackfacingMode : uint8 {
    PixelNormal,
    FaceNormal,
};

