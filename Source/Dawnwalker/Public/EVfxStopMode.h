#pragma once
#include "CoreMinimal.h"
#include "EVfxStopMode.generated.h"

UENUM()
enum class EVfxStopMode : int8 {
    UntilWornOut,
    Immediately,
};

