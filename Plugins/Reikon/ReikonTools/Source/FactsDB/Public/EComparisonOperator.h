#pragma once
#include "CoreMinimal.h"
#include "EComparisonOperator.generated.h"

UENUM(BlueprintType)
enum class EComparisonOperator : uint8 {
    Equal,
    NotEqual,
    Greater,
    GreaterOrEqual,
    Lesser,
    LesserOrEqual,
};

