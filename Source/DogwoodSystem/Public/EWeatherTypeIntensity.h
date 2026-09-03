#pragma once
#include "CoreMinimal.h"
#include "EWeatherTypeIntensity.generated.h"

UENUM(BlueprintType)
enum class EWeatherTypeIntensity : uint8 {
    None,
    Low,
    Medium,
    High,
};

