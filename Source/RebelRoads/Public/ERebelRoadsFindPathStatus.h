#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsFindPathStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsFindPathStatus : uint8 {
    Success,
    InvalidInput,
    NoPathFound,
    PathTooShort,
    PathTooInefficient,
    Unknown,
};

