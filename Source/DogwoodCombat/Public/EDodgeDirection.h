#pragma once
#include "CoreMinimal.h"
#include "EDodgeDirection.generated.h"

UENUM(BlueprintType)
enum class EDodgeDirection : uint8 {
    None,
    Left,
    Right,
    Back,
    Forward,
};

