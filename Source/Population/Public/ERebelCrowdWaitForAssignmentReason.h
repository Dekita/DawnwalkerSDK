#pragma once
#include "CoreMinimal.h"
#include "ERebelCrowdWaitForAssignmentReason.generated.h"

UENUM(BlueprintType)
enum class ERebelCrowdWaitForAssignmentReason : uint8 {
    ReasonNotRecordedYet,
    OutOfDistancePendingUnregister,
    VisiblePendingUnregister,
    WaitingForResolvedAssignment,
    ResolvedAssignmentLocationMissing,
    WaitingForFirstPathDirection,
    ReadyToAdvanceToWaitForPawn,
};

