#pragma once
#include "CoreMinimal.h"
#include "EWeaponSlot.generated.h"

UENUM(BlueprintType)
enum class EWeaponSlot : uint8 {
    None,
    RightHand,
    LeftHand,
    Head,
    Tail,
    RightFoot,
    LeftFoot,
};

