#pragma once
#include "CoreMinimal.h"
#include "ERebelLocomotionStateFlag.generated.h"

UENUM(BlueprintType)
enum class ERebelLocomotionStateFlag : uint8 {
    Crouch,
    HasFixedDirection,
    HasAcceleration,
    HasVelocity,
    IsMoving,
    WasMoving,
    TargetInFOV,
    InAir,
    IsJumping,
    WasJumping,
    IsFalling,
    IsFlying,
    IsPlayingRootMotion,
    HasCustomGravity,
    IsGroundWalkable,
    IsGroundSlideable,
    IsGroundLedge,
    CrouchStateChange,
    CanTurnInPlace,
    LookAtEnabled,
    WantsToStop,
    StartTransitionsDisabled,
    StopTransitionsDisabled,
    PivotTransitionsDisabled,
    SpeedUpTransitionsEnabled,
    SlowDownTransitionsEnabled,
    StopWithTurnTransitionsEnabled,
    Max,
};

