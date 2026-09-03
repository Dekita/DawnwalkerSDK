#pragma once
#include "CoreMinimal.h"
#include "EInteractionRiskType.generated.h"

UENUM(BlueprintType)
enum class EInteractionRiskType : uint8 {
    None,
    Dangerous,
    MaxHunger,
};

