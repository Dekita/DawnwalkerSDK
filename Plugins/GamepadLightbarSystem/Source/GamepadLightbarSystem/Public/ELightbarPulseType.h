#pragma once
#include "CoreMinimal.h"
#include "ELightbarPulseType.generated.h"

UENUM(BlueprintType)
enum class ELightbarPulseType : uint8 {
    None,
    Slow,
    Normal,
    Fast,
};

