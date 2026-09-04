#pragma once
#include "CoreMinimal.h"
#include "ERebelRotationMode.generated.h"

UENUM(BlueprintType)
enum class ERebelRotationMode : uint8 {
    None,
    FaceVelocity,
    FaceDirection,
};

