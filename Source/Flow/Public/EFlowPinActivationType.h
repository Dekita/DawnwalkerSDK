#pragma once
#include "CoreMinimal.h"
#include "EFlowPinActivationType.generated.h"

UENUM(BlueprintType)
enum class EFlowPinActivationType : uint8 {
    Default,
    Forced,
    PassThrough,
};

