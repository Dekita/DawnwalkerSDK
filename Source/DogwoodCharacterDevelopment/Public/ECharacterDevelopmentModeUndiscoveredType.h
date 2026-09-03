#pragma once
#include "CoreMinimal.h"
#include "ECharacterDevelopmentModeUndiscoveredType.generated.h"

UENUM(BlueprintType)
enum class ECharacterDevelopmentModeUndiscoveredType : uint8 {
    None,
    Unvisited,
    Unseen,
};

