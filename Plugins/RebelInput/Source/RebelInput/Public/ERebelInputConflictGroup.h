#pragma once
#include "CoreMinimal.h"
#include "ERebelInputConflictGroup.generated.h"

UENUM(BlueprintType)
enum class ERebelInputConflictGroup : uint8 {
    General,
    Combat,
    BloodDrinking,
    PhotoMode,
};

