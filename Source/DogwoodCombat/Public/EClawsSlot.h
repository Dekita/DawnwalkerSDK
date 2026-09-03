#pragma once
#include "CoreMinimal.h"
#include "EClawsSlot.generated.h"

UENUM(BlueprintType)
enum class EClawsSlot : uint8 {
    LeftHand,
    RightHand,
    Both,
};

