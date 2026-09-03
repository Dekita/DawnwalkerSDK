#pragma once
#include "CoreMinimal.h"
#include "ERebelPS5ConsoleType.generated.h"

UENUM(BlueprintType)
enum class ERebelPS5ConsoleType : uint8 {
    Invalid,
    PS5,
    PS5Pro,
    MAX,
};

