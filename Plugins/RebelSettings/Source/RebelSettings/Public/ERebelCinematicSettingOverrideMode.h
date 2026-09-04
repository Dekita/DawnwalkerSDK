#pragma once
#include "CoreMinimal.h"
#include "ERebelCinematicSettingOverrideMode.generated.h"

UENUM(BlueprintType)
enum class ERebelCinematicSettingOverrideMode : uint8 {
    FlatOverride,
    PerQualityOffset,
};

