#pragma once
#include "CoreMinimal.h"
#include "EBiomesPCGLimitMask.generated.h"

UENUM(BlueprintType)
enum class EBiomesPCGLimitMask : uint8 {
    None,
    Growth,
    Scale,
    Rotation,
    Group,
};

