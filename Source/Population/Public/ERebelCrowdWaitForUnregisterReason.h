#pragma once
#include "CoreMinimal.h"
#include "ERebelCrowdWaitForUnregisterReason.generated.h"

UENUM(BlueprintType)
enum class ERebelCrowdWaitForUnregisterReason : uint8 {
    ReasonNotRecordedYet,
    LeftCrowdDistance,
    BecameVisible,
    PawnMissing,
    WaitForPawnStalled,
    InitPawnStalled,
    PawnUnhideTimeout,
    WaitForAssignmentStalled,
    ModifierVolumeCapacityExceeded,
    ReplacedByHigherPriorityEntrySpawn,
    ReplacedByHigherPriorityCellSpawn,
    FreeOverloadedCapacity,
    OutsideInvisibleSpawnRange,
};

