#pragma once
#include "CoreMinimal.h"
#include "ETintType.generated.h"

UENUM(BlueprintType)
enum class ETintType : uint8 {
    None,
    Hovered,
    Pressed,
    Disabled,
    Used,
};

