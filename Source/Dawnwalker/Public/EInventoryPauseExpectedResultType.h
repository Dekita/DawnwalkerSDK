#pragma once
#include "CoreMinimal.h"
#include "EInventoryPauseExpectedResultType.generated.h"

UENUM(BlueprintType)
enum class EInventoryPauseExpectedResultType : uint8 {
    ItemsFound,
    ItemsNotFound,
};

