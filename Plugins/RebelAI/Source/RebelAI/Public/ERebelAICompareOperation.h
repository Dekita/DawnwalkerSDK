#pragma once
#include "CoreMinimal.h"
#include "ERebelAICompareOperation.generated.h"

UENUM(BlueprintType)
enum class ERebelAICompareOperation : uint8 {
    Equal,
    GreaterThan,
    LessThan,
    LessOrEqual,
    GreaterOrEqual,
    NotEqual,
};

