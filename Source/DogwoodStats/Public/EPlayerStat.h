#pragma once
#include "CoreMinimal.h"
#include "EPlayerStat.generated.h"

UENUM(BlueprintType)
enum class EPlayerStat : uint8 {
    Health,
    Stamina,
    Blood,
    Strength,
    Agility,
};

