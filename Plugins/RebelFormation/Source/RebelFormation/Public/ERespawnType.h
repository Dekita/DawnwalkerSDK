#pragma once
#include "CoreMinimal.h"
#include "ERespawnType.generated.h"

UENUM(BlueprintType)
enum class ERespawnType : uint8 {
    None,
    OnActivation,
    OnSignal,
};

