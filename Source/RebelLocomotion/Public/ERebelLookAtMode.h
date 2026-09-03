#pragma once
#include "CoreMinimal.h"
#include "ERebelLookAtMode.generated.h"

UENUM(BlueprintType)
enum class ERebelLookAtMode : uint8 {
    None,
    OnlyInFOV,
    ClampToFOV,
    KeepFacing,
    KeepInFOV,
};

