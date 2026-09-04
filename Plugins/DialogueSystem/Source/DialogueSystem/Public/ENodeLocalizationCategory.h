#pragma once
#include "CoreMinimal.h"
#include "ENodeLocalizationCategory.generated.h"

UENUM(BlueprintType)
enum class ENodeLocalizationCategory : uint8 {
    Stretchable,
    NotStretchable,
    ValidationFailed,
    Invalid,
};

