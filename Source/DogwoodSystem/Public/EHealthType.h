#pragma once
#include "CoreMinimal.h"
#include "EHealthType.generated.h"

UENUM(BlueprintType)
enum class EHealthType : uint8 {
    Health,
    Aether,
    Blood,
};

