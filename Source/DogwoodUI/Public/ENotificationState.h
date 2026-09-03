#pragma once
#include "CoreMinimal.h"
#include "ENotificationState.generated.h"

UENUM(BlueprintType)
enum class ENotificationState : uint8 {
    Hidden,
    Showing,
    Active,
    Hiding,
};

