#pragma once
#include "CoreMinimal.h"
#include "EItemConditionType.generated.h"

UENUM(BlueprintType)
enum class EItemConditionType : uint8 {
    HasAll,
    HasAny,
    DoesntHave,
};

