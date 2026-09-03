#pragma once
#include "CoreMinimal.h"
#include "EHoudiniBakeAfterNextCook.generated.h"

UENUM(BlueprintType)
enum class EHoudiniBakeAfterNextCook : uint8 {
    Disabled,
    Always,
    Once,
};

