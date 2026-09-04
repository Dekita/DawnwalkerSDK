#pragma once
#include "CoreMinimal.h"
#include "EKeepDistanceToPoints.generated.h"

UENUM(BlueprintType)
enum class EKeepDistanceToPoints : uint8 {
    NoDistance,
    DistanceToSpawnpoints,
    DistanceToActionpoints,
};

