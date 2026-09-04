#pragma once
#include "CoreMinimal.h"
#include "ESpawnRange.generated.h"

UENUM(BlueprintType)
enum class ESpawnRange : uint8 {
    InsideTheArea,
    Always,
};

