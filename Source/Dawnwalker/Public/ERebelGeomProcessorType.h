#pragma once
#include "CoreMinimal.h"
#include "ERebelGeomProcessorType.generated.h"

UENUM(BlueprintType)
enum class ERebelGeomProcessorType : uint8 {
    None,
    Shadowstep,
    Traversal,
    AntiGrav,
    ClawRide,
    Movement,
    Vaulting,
    Climbing,
    LedgeCatching,
};

