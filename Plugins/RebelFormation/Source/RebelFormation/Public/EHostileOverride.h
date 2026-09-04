#pragma once
#include "CoreMinimal.h"
#include "EHostileOverride.generated.h"

UENUM(BlueprintType)
enum class EHostileOverride : uint8 {
    Default,
    Hostile,
    Neutral,
};

