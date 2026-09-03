#pragma once
#include "CoreMinimal.h"
#include "EActiveAbilitiesFunctionalityType.generated.h"

UENUM(BlueprintType)
enum class EActiveAbilitiesFunctionalityType : uint8 {
    RadialSlotAssignmentActivation,
    RadialSlotAssignmentCanceling,
    RadialSlotAssignmentBinding,
    RadialSlotAssignmentClearing,
    QuickSlotAssignmentActivation,
    QuickSlotAssignmentCanceling,
    QuickSlotAssignmentBinding,
};

