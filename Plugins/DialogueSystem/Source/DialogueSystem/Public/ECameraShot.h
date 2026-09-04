#pragma once
#include "CoreMinimal.h"
#include "ECameraShot.generated.h"

UENUM(BlueprintType)
enum class ECameraShot : uint8 {
    None,
    Wide,
    Full,
    Side,
    Mid,
    Ots,
    Mfs,
    Mcu,
    Cu,
    Custom1,
    Custom2,
};

