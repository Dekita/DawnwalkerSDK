#pragma once
#include "CoreMinimal.h"
#include "ESynchronisedAnimationRotationMode.generated.h"

UENUM(BlueprintType)
enum class ESynchronisedAnimationRotationMode : uint8 {
    Free,
    FacingEachother,
    InstigatorBehindTarget,
};

