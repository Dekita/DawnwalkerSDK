#pragma once
#include "CoreMinimal.h"
#include "EEffectDurationType.generated.h"

UENUM(BlueprintType)
enum class EEffectDurationType : uint8 {
    None,
    Infinite,
    RealTime,
    GameWorldTime,
};

