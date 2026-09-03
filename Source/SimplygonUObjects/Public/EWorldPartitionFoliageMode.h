#pragma once
#include "CoreMinimal.h"
#include "EWorldPartitionFoliageMode.generated.h"

UENUM(BlueprintType)
enum class EWorldPartitionFoliageMode : uint8 {
    Instancing,
    Grouping,
};

