#pragma once
#include "CoreMinimal.h"
#include "EEiiInstanceState.generated.h"

UENUM()
enum class EEiiInstanceState : int32 {
    None,
    Converted,
    Restored,
};

