#pragma once
#include "CoreMinimal.h"
#include "EAlertStage.generated.h"

UENUM(BlueprintType)
enum class EAlertStage : uint8 {
    Low,
    Medium,
    High,
};

