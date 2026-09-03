#pragma once
#include "CoreMinimal.h"
#include "EJaliExpressionStartEndWithOptions.generated.h"

UENUM(BlueprintType)
enum class EJaliExpressionStartEndWithOptions : uint8 {
    None,
    Minimum,
    Maximum,
    SpecificPercentage,
    Zero,
};

