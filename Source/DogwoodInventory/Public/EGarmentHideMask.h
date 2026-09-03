#pragma once
#include "CoreMinimal.h"
#include "EGarmentHideMask.generated.h"

UENUM(BlueprintType)
enum class EGarmentHideMask : uint8 {
    None,
    Gauntlet_Left,
    Gauntlet_Right,
    Reserved0 = 4,
    Reserved1 = 8,
    Reserved2 = 16,
    Reserved3 = 32,
    Reserved4 = 64,
    Reserved5 = 128,
};

