#pragma once
#include "CoreMinimal.h"
#include "ETimeDisplayOption.generated.h"

UENUM(BlueprintType)
enum class ETimeDisplayOption : uint8 {
    None,
    TimeOnly,
    Full = 255,
};

