#pragma once
#include "CoreMinimal.h"
#include "ECrouchBlendState.generated.h"

UENUM(BlueprintType)
enum class ECrouchBlendState : uint8 {
    NoCrouch,
    BlendingIn,
    Crouch,
    BlendingOut,
};

