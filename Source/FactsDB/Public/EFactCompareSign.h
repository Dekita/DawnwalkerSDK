#pragma once
#include "CoreMinimal.h"
#include "EFactCompareSign.generated.h"

UENUM(BlueprintType)
enum class EFactCompareSign : uint8 {
    FC_FactIsBigger,
    FC_FactIsEqualOrBigger,
    FC_FactIsEqual,
    FC_FactIsSmallerOrEqual,
    FC_FactIsSmaller,
};

