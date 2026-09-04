#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLaneFlags.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsLaneFlags : uint8 {
    None,
    Left,
    Right,
    Center = 4,
};

