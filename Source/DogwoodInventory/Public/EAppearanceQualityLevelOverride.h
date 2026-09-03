#pragma once
#include "CoreMinimal.h"
#include "EAppearanceQualityLevelOverride.generated.h"

UENUM(BlueprintType)
enum class EAppearanceQualityLevelOverride : uint8 {
    None,
    Performance,
    Balanced,
    Quality,
};

