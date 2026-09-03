#pragma once
#include "CoreMinimal.h"
#include "ERemeshingTarget.generated.h"

UENUM(BlueprintType)
enum class ERemeshingTarget : uint8 {
    OnScreenSize,
    MaxDeviation,
};

