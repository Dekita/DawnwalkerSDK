#pragma once
#include "CoreMinimal.h"
#include "EFramerateMode.generated.h"

UENUM(BlueprintType)
enum class EFramerateMode : uint8 {
    Locked,
    Unlocked,
};

