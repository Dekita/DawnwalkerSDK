#pragma once
#include "CoreMinimal.h"
#include "EWeaponCameraType.generated.h"

UENUM(BlueprintType)
enum class EWeaponCameraType : uint8 {
    FistFight,
    Near,
    Far,
};

