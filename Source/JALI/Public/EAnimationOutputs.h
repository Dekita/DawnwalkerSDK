#pragma once
#include "CoreMinimal.h"
#include "EAnimationOutputs.generated.h"

UENUM(BlueprintType)
enum class EAnimationOutputs : uint8 {
    AnimSequence,
    CurveTable,
};

