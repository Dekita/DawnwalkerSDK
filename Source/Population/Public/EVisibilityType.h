#pragma once
#include "CoreMinimal.h"
#include "EVisibilityType.generated.h"

UENUM(BlueprintType)
enum class EVisibilityType : uint8 {
    Unknown,
    Visible,
    BecomesVisible,
    NotVisibleButSeenRecently,
    NotVisibleAndNotSeenRecently,
};

