#pragma once
#include "CoreMinimal.h"
#include "ESpawnPriority.generated.h"

UENUM(BlueprintType)
enum class ESpawnPriority : uint8 {
    AlwaysSpawned,
    Quest,
    Default,
    Background,
    Last,
    MAX,
};

