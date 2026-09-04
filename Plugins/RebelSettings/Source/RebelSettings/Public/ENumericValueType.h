#pragma once
#include "CoreMinimal.h"
#include "ENumericValueType.generated.h"

UENUM(BlueprintType)
enum class ENumericValueType : uint8 {
    Integer,
    IntegerPercentage,
    DecimalOnePlace,
    DecimalTwoPlaces,
    DecimalPercentage,
};

