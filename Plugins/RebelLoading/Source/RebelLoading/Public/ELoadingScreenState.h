#pragma once
#include "CoreMinimal.h"
#include "ELoadingScreenState.generated.h"

UENUM(BlueprintType)
enum class ELoadingScreenState : uint8 {
    Idle,
    Requested,
    Loading,
    Hold,
    PostLoad,
};

