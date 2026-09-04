#pragma once
#include "CoreMinimal.h"
#include "ERebelCrowdPendingReason.generated.h"

UENUM(BlueprintType)
enum class ERebelCrowdPendingReason : uint8 {
    ReasonNotRecordedYet,
    NoGlobalSpawnableCells,
    NoSpawnableCellInStubArea,
    NoCompatibleSpawnLocationInMatchingCells,
    ThreatMinDistanceBlocksAllMatchingSpawnLocations,
    Ready,
    AreaFullyOverloaded,
    EntryOverloaded,
    AreaContextMissing,
    EntryContextMissing,
};

