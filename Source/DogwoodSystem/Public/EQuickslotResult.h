#pragma once
#include "CoreMinimal.h"
#include "EQuickslotResult.generated.h"

UENUM(BlueprintType)
enum class EQuickslotResult : uint8 {
    Invalid,
    Success,
    QuickslotEmpty,
    UseFailed,
    Depleted,
};

