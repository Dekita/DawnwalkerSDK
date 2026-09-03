#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsFollowerStatus.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsFollowerStatus : uint8 {
    Unset,
    Idle,
    MoveRequested,
    PathFinished,
    SetMoveSegment,
    FollowPathSegment,
};

