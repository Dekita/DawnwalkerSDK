#pragma once
#include "CoreMinimal.h"
#include "EShadowstepTargetResultContext.generated.h"

UENUM(BlueprintType)
enum class EShadowstepTargetResultContext : uint8 {
    Invalid,
    DifferentSurface,
    Valid,
};

