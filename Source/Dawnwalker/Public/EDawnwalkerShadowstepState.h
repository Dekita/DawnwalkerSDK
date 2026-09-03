#pragma once
#include "CoreMinimal.h"
#include "EDawnwalkerShadowstepState.generated.h"

UENUM(BlueprintType)
enum class EDawnwalkerShadowstepState : uint8 {
    Idle,
    Transition,
    StartMontage,
    EndMontage,
    BlendOut,
    TeleportTransition,
};

