#pragma once
#include "CoreMinimal.h"
#include "EMortalitySetting.generated.h"

UENUM()
enum class EMortalitySetting : int32 {
    Mortal,
    Immortal,
    Invulnerable,
    WillBeUnconscious,
};

