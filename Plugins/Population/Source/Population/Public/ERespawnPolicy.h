#pragma once
#include "CoreMinimal.h"
#include "ERespawnPolicy.generated.h"

UENUM(BlueprintType)
enum class ERespawnPolicy : uint8 {
    DoNotRespawn,
    NextDay,
    After12Hours,
    After6Hours,
    After4Hours,
};

