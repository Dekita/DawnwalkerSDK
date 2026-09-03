#pragma once
#include "CoreMinimal.h"
#include "EDWDifficultyLevel.generated.h"

UENUM(BlueprintType)
enum class EDWDifficultyLevel : uint8 {
    Story,
    Normal,
    Immersive,
    NewHard,
};

