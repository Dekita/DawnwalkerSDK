#pragma once
#include "CoreMinimal.h"
#include "EPartRemoverThresholdType.generated.h"

UENUM(BlueprintType)
enum class EPartRemoverThresholdType : uint8 {
    PhysicalSize,
    OnScreenSize,
    PercentageOfSceneDiameter,
};

