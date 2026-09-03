#pragma once
#include "CoreMinimal.h"
#include "EFocusAttackSequenceType.generated.h"

UENUM(BlueprintType)
enum class EFocusAttackSequenceType : uint8 {
    Hit,
    Miss,
    Death,
    InstaKillSpecial,
    Dash,
};

