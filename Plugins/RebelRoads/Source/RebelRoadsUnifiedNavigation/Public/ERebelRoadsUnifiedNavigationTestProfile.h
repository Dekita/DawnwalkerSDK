#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsUnifiedNavigationTestProfile.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsUnifiedNavigationTestProfile : uint8 {
    Recast,
    RoadOnly,
    Unified,
};

