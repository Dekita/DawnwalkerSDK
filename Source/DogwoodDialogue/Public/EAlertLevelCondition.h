#pragma once
#include "CoreMinimal.h"
#include "EAlertLevelCondition.generated.h"

UENUM(BlueprintType)
enum class EAlertLevelCondition : uint8 {
    Above,
    Below,
    Equal,
};

