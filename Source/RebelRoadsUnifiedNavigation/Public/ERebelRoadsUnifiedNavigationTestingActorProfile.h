#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsUnifiedNavigationTestingActorProfile.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsUnifiedNavigationTestingActorProfile : uint8 {
    Recast,
    RoadOnly,
    Unified,
};

