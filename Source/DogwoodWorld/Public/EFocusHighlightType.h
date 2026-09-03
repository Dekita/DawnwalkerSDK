#pragma once
#include "CoreMinimal.h"
#include "EFocusHighlightType.generated.h"

UENUM(BlueprintType)
enum class EFocusHighlightType : uint8 {
    Disabled,
    Regular,
    Important,
    Hostile,
};

