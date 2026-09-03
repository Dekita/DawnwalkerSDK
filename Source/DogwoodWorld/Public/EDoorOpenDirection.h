#pragma once
#include "CoreMinimal.h"
#include "EDoorOpenDirection.generated.h"

UENUM(BlueprintType)
enum class EDoorOpenDirection : uint8 {
    Forward,
    Backward,
};

