#pragma once
#include "CoreMinimal.h"
#include "EVibrationPreset.generated.h"

UENUM(BlueprintType)
enum class EVibrationPreset : uint8 {
    StrongLongConstant,
    StrongLongRepeating,
    StrongShortConstant,
    StrongShortRepeating,
    WeakLongConstant,
    WeakLongRepeating,
    WeakShortConstant,
    WeakShortRepeating,
};

