#pragma once
#include "CoreMinimal.h"
#include "EPopulationAreaEntryBehavior.generated.h"

UENUM(BlueprintType)
enum class EPopulationAreaEntryBehavior : uint8 {
    RandomPoints,
    ActionPointsByTag,
    AttachedSpawnAndActionPoints,
    AttachedSpawnAndActionPointsInOrder,
    WayPointsByTag,
    Crowd,
    Extension,
};

