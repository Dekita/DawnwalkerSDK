#pragma once
#include "CoreMinimal.h"
#include "EPhotoModeState.generated.h"

UENUM(BlueprintType)
enum class EPhotoModeState : uint8 {
    None,
    PhotoMode,
    PhotoModeCameraInput,
};

