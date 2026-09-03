#pragma once
#include "CoreMinimal.h"
#include "ECharacterAttitude.generated.h"

UENUM(BlueprintType)
enum class ECharacterAttitude : uint8 {
    None,
    Friendly,
    Passive,
    Hostile,
    Aggressive,
};

