#pragma once
#include "CoreMinimal.h"
#include "EFlowSignalMode.generated.h"

UENUM(BlueprintType)
enum class EFlowSignalMode : uint8 {
    Enabled,
    Disabled,
    PassThrough,
};

