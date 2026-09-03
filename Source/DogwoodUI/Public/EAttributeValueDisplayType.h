#pragma once
#include "CoreMinimal.h"
#include "EAttributeValueDisplayType.generated.h"

UENUM(BlueprintType)
enum EAttributeValueDisplayType {
    Integral,
    Percentage,
    PercentageUnsigned,
    Hidden,
};

