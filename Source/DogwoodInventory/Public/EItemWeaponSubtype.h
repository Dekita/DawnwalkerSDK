#pragma once
#include "CoreMinimal.h"
#include "EItemWeaponSubtype.generated.h"

UENUM(BlueprintType)
enum class EItemWeaponSubtype : uint8 {
    None,
    Short,
    Long,
    Great,
    Swordlike,
};

