#pragma once
#include "CoreMinimal.h"
#include "EDespawnStyle.generated.h"

UENUM(BlueprintType)
enum class EDespawnStyle : uint8 {
    Hidden,
    GoToDespawnPoint,
    Animation,
};

