#pragma once
#include "CoreMinimal.h"
#include "ETargetChangeDirection.generated.h"

UENUM(BlueprintType)
enum class ETargetChangeDirection : uint8 {
    Left,
    Right,
    Any,
};

