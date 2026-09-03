#pragma once
#include "CoreMinimal.h"
#include "ESystemIndicatorFlag.generated.h"

UENUM(BlueprintType)
enum class ESystemIndicatorFlag : uint8 {
    None,
    Loading,
    Saving,
};

