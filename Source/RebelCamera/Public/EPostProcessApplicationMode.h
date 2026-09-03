#pragma once
#include "CoreMinimal.h"
#include "EPostProcessApplicationMode.generated.h"

UENUM(BlueprintType)
enum class EPostProcessApplicationMode : uint8 {
    BeforeWorld,
    AfterWorld,
};

