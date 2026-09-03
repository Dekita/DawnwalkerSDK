#pragma once
#include "CoreMinimal.h"
#include "ESaveRequestResult.generated.h"

UENUM(BlueprintType)
enum class ESaveRequestResult : uint8 {
    Success,
    SavingLocked,
    Failure,
};

