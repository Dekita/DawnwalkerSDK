#pragma once
#include "CoreMinimal.h"
#include "EGenerateLocationOnRoads_Mode.generated.h"

UENUM(BlueprintType)
enum class EGenerateLocationOnRoads_Mode : uint8 {
    Random,
    NearestUnusedShared,
};

