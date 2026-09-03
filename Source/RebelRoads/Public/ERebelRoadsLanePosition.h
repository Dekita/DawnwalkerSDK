#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLanePosition.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsLanePosition : uint8 {
    None,
    Left,
    Center,
    Right,
};

