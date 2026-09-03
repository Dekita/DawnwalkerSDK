#pragma once
#include "CoreMinimal.h"
#include "EReplacementMode.generated.h"

UENUM(BlueprintType)
enum class EReplacementMode : uint8 {
    AlwaysVisible,
    ReplacePrevious,
    ReplaceRandom,
};

