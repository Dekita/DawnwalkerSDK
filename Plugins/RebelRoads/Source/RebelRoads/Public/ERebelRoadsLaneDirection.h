#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsLaneDirection.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsLaneDirection : uint8 {
    None,
    Auto,
    Forward,
    Backward,
    Both,
};

