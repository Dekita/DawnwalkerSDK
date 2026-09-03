#pragma once
#include "CoreMinimal.h"
#include "EBodyMask_Torso.generated.h"

UENUM(BlueprintType)
enum class EBodyMask_Torso : uint8 {
    Invalid,
    VNeck,
    Chest,
    Abdomen = 4,
    ShoulderBlades = 8,
    Loins = 16,
    Crotch = 32,
    Reserved0 = 64,
    Reserved1 = 128,
};

