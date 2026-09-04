#pragma once
#include "CoreMinimal.h"
#include "EFactDBVersion.generated.h"

UENUM(BlueprintType)
enum class EFactDBVersion : uint8 {
    Invalid,
    InitialVersion,
    Current = InitialVersion,
};

