#pragma once
#include "CoreMinimal.h"
#include "ERebelCrowdPathFindingRequestType.generated.h"

UENUM(BlueprintType)
enum class ERebelCrowdPathFindingRequestType : uint8 {
    None,
    CrowdPath,
    WayPointReachability,
};

