#pragma once
#include "CoreMinimal.h"
#include "ERebelXboxSeriesConsoleType.generated.h"

UENUM(BlueprintType)
enum class ERebelXboxSeriesConsoleType : uint8 {
    Invalid,
    XboxSeriesS,
    XboxSeriesX,
    MAX,
};

