#pragma once
#include "CoreMinimal.h"
#include "EBlockingDirection.generated.h"

UENUM(BlueprintType)
enum class EBlockingDirection : uint8 {
    None,
    Top,
    Bottom,
    Left = 4,
    Right = 8,
    TopLeft = 5,
    TopRight = 9,
    BottomLeft = 6,
    BottomRight = 10,
};

