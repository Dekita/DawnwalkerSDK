#pragma once
#include "CoreMinimal.h"
#include "ESpecialAttackType.generated.h"

UENUM(BlueprintType)
enum class ESpecialAttackType : uint8 {
    None,
    Shadowstep,
    PushAway,
    Grab,
};

