#pragma once
#include "CoreMinimal.h"
#include "EWeaponSwingDirection.generated.h"

UENUM(BlueprintType)
enum class EWeaponSwingDirection : uint8 {
    None,
    Left,
    Right,
    Top,
    Bottom,
};

