#pragma once
#include "CoreMinimal.h"
#include "EMappinTarget.generated.h"

UENUM(BlueprintType)
enum class EMappinTarget : uint8 {
    Compass,
    WorldMap,
    Count,
};

