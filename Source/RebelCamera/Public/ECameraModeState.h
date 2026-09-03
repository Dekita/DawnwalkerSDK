#pragma once
#include "CoreMinimal.h"
#include "ECameraModeState.generated.h"

UENUM(BlueprintType)
enum class ECameraModeState : uint8 {
    BlendingIn,
    Active,
    BlendingOut,
    Popped,
};

