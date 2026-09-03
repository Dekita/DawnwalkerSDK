#pragma once
#include "CoreMinimal.h"
#include "EStatPresentationType.generated.h"

UENUM(BlueprintType)
enum class EStatPresentationType : uint8 {
    PlainValue,
    ValuePerSecond,
    ValueAsPercentage,
    ValueWithMaximum,
    ValueRange,
    CalculatedPercentage,
};

