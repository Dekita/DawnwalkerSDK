#pragma once
#include "CoreMinimal.h"
#include "ESplineFollowResult.generated.h"

UENUM(BlueprintType)
enum class ESplineFollowResult : uint8 {
    Invalid,
    Following,
    ReachedGoal,
};

