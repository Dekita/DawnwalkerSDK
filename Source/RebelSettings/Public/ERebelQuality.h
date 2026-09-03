#pragma once
#include "CoreMinimal.h"
#include "ERebelQuality.generated.h"

UENUM(BlueprintType)
enum class ERebelQuality : uint8 {
    Never,
    Low,
    Medium,
    High,
    Epic,
    Cinematic,
    MAX,
};

