#pragma once
#include "CoreMinimal.h"
#include "ERebelBypassMode.generated.h"

UENUM(BlueprintType)
enum class ERebelBypassMode : uint8 {
    None,
    Bypass,
    Combat,
    FullCapsule,
};

