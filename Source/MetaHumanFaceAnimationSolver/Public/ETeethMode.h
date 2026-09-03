#pragma once
#include "CoreMinimal.h"
#include "ETeethMode.generated.h"

UENUM(BlueprintType)
enum class ETeethMode : uint8 {
    TrackingPoints,
    Estimated,
};

