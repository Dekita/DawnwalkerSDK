#pragma once
#include "CoreMinimal.h"
#include "EHookVersion.generated.h"

UENUM(BlueprintType)
enum class EHookVersion : uint8 {
    Base,
    IncludePathFix,
    IncludePathFix2,
    Current = IncludePathFix2,
};

