#pragma once
#include "CoreMinimal.h"
#include "ESpawnLevelModifier.generated.h"

UENUM(BlueprintType)
enum class ESpawnLevelModifier : uint8 {
    Easy,
    Normal,
    Hard,
    VeryHard,
    Overpowered,
};

