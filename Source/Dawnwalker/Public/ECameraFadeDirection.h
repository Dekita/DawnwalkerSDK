#pragma once
#include "CoreMinimal.h"
#include "ECameraFadeDirection.generated.h"

UENUM(BlueprintType)
enum class ECameraFadeDirection : uint8 {
    Show,
    Hide,
};

