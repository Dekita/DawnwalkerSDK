#pragma once
#include "CoreMinimal.h"
#include "ESpawnCondition.generated.h"

UENUM(BlueprintType)
enum class ESpawnCondition : uint8 {
    Spawned,
    Despawned,
};

