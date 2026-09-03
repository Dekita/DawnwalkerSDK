#pragma once
#include "CoreMinimal.h"
#include "EQuickSlotConditionType.generated.h"

UENUM(BlueprintType)
enum class EQuickSlotConditionType : uint8 {
    SlotBindingStarted,
    SlotBindingFinished,
    SlotBound,
    HudQuickSlotsActivated,
    HudQuickSlotsDeactivated,
};

