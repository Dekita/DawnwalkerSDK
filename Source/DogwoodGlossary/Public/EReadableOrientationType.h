#pragma once
#include "CoreMinimal.h"
#include "EReadableOrientationType.generated.h"

UENUM(BlueprintType)
enum class EReadableOrientationType : uint8 {
    None,
    Vertical,
    Horizontal,
    Max,
};

