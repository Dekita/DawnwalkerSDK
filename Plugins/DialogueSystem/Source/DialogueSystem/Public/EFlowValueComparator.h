#pragma once
#include "CoreMinimal.h"
#include "EFlowValueComparator.generated.h"

UENUM(BlueprintType)
enum class EFlowValueComparator : uint8 {
    Equal,
    GreaterThan,
    LessThan,
    LessOrEqual,
    GreaterOrEqual,
};

