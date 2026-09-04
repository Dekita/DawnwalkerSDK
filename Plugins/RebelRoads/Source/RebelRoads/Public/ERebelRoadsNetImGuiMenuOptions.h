#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsNetImGuiMenuOptions.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsNetImGuiMenuOptions : uint8 {
    Roads,
    Roads_Waypoints,
    Roads_Waypoints_Coordinates,
    Roads_Actionpoints,
    Roads_Segments,
    Roads_Crossings,
    Roads_Lanes,
    Roads_Indices,
    Roads_Virtual,
    Roads_MoveTargets_Transports,
    Roads_MoveTargets,
    Roads_MoveTargets_Details,
    Roads_MovementDetails_Table,
    Roads_Paths,
    Roads_PathFollowing,
    Roads_PathFollowing_CurrentSegment1,
    Roads_PathFollowing_CurrentSegment2,
    Roads_PathFollowing_CurrentSegment3,
    Roads_PathFollowing_Details,
    Roads_Steering1,
    Roads_Steering2,
    Roads_Avoidance,
    Roads_Collisions,
    Roads_Status,
    Roads_Focus,
    Count,
};

