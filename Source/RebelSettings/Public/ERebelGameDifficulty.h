#pragma once
#include "CoreMinimal.h"
#include "ERebelGameDifficulty.generated.h"

UENUM(BlueprintType)
enum class ERebelGameDifficulty : uint8 {
    Story,
    Normal,
    Immersive,
    Nightmare,
    MAX,
};

