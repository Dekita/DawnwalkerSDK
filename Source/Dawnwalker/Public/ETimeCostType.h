#pragma once
#include "CoreMinimal.h"
#include "ETimeCostType.generated.h"

UENUM(BlueprintType)
enum class ETimeCostType : uint8 {
    None,
    ShowAndAdd,
    ShowOnly,
};

