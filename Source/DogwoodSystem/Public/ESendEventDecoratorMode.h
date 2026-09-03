#pragma once
#include "CoreMinimal.h"
#include "ESendEventDecoratorMode.generated.h"

UENUM()
enum class ESendEventDecoratorMode : int32 {
    None,
    OnActivation,
    OnDeactivation,
};

