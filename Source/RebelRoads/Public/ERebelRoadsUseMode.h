#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsUseMode.generated.h"

UENUM()
enum class ERebelRoadsUseMode : int32 {
    Enable,
    EnableRoadFollowerOnly,
    Disable,
    Unset,
};

