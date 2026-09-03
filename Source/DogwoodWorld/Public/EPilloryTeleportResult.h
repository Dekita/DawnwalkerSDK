#pragma once
#include "CoreMinimal.h"
#include "EPilloryTeleportResult.generated.h"

UENUM(BlueprintType)
enum class EPilloryTeleportResult : uint8 {
    Invalid,
    Failure,
    Teleported,
    NoPilloryInRange,
};

