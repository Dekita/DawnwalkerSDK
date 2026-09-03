#pragma once
#include "CoreMinimal.h"
#include "EClawRidePromptState.generated.h"

UENUM(BlueprintType)
enum class EClawRidePromptState : uint8 {
    NoPrompt,
    WantsLLD,
    WantsLLDNoClawRide,
    LLDInProgress,
    LLDInProgressNoClawRide,
    NotMoving,
    ClimbUp,
    NotMovingAndClimbUp,
    AntiGrav,
    NotMovingAndAntiGrav,
};

