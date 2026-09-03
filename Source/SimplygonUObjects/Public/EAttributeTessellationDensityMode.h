#pragma once
#include "CoreMinimal.h"
#include "EAttributeTessellationDensityMode.generated.h"

UENUM(BlueprintType)
enum class EAttributeTessellationDensityMode : uint8 {
    RelativeArea,
    AbsoluteArea,
    RelativeLength,
    AbsoluteLength,
    UserDefined,
    OnScreenSize,
};

