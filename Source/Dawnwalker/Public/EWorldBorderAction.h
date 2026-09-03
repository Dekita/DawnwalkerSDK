#pragma once
#include "CoreMinimal.h"
#include "EWorldBorderAction.generated.h"

UENUM(BlueprintType)
enum class EWorldBorderAction : uint8 {
    TeleportBack,
    TeleportToActor,
};

