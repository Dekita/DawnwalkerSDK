#pragma once
#include "CoreMinimal.h"
#include "EVisibilityCameraMode.generated.h"

UENUM(BlueprintType)
enum class EVisibilityCameraMode : uint8 {
    Manual,
    Sphere,
    Hemisphere,
};

