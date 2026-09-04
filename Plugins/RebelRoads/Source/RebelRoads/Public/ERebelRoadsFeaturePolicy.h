#pragma once
#include "CoreMinimal.h"
#include "ERebelRoadsFeaturePolicy.generated.h"

UENUM(BlueprintType)
enum class ERebelRoadsFeaturePolicy : uint8 {
    Disabled,
    OnDemand,
    Enabled,
};

