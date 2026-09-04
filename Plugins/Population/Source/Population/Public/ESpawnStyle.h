#pragma once
#include "CoreMinimal.h"
#include "ESpawnStyle.generated.h"

UENUM(BlueprintType)
enum class ESpawnStyle : uint8 {
    Hidden,
    Animation,
    Instant,
    Auto,
};

