#pragma once
#include "CoreMinimal.h"
#include "EHemisphereUpVector.generated.h"

UENUM(BlueprintType)
enum class EHemisphereUpVector : uint8 {
    PositiveX,
    NegativeX,
    PositiveY,
    NegativeY,
    PositiveZ,
    NegativeZ,
};

