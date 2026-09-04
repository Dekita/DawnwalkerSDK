#pragma once
#include "CoreMinimal.h"
#include "ESpawnEventType.generated.h"

UENUM(BlueprintType)
enum class ESpawnEventType : uint8 {
    Spawn,
    Despawn,
};

