#pragma once
#include "CoreMinimal.h"
#include "ERebelSKURegion.generated.h"

UENUM(BlueprintType)
enum class ERebelSKURegion : uint8 {
    Invalid,
    Global,
    Europe,
    NorthAmerica,
    Asia,
    Japan,
    Germany,
    China,
    Korea,
    MAX,
};

