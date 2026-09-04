#include "RebelCharacterMovementConfig.h"

FRebelCharacterMovementConfig::FRebelCharacterMovementConfig() {
    this->RotationMode = ERebelRotationMode::None;
    this->LookAtMode = ERebelLookAtMode::None;
    this->VelocitySyncMode = ERebelVelocitySyncMode::AnimDriven;
    this->RotationSyncMode = ERebelRotationSyncMode::AnimDriven;
    this->bAnimDrivenWithoutInput = false;
    this->RootSpeedScale = 0.00f;
    this->bCharacterScaleAffectsRootSpeed = false;
    this->bStrideWarpingEnabled = false;
    this->StrideInterpolationSpeed = 0.00f;
    this->bUseCyclePlayRate = false;
    this->bCycleStateVelocitySyncEnabled = false;
    this->bUseAccelerationForPaths = false;
    this->InAirMaxRequestedTurnAngle = 0.00f;
    this->TurnInPlaceYawOffset = 0.00f;
    this->AimYawMax = 0.00f;
    this->MinSpeed = 0.00f;
    this->MaxSpeed = 0.00f;
    this->bUseSpeedScale = false;
    this->MaxStepHeight = 0.00f;
    this->bUseGravityScale = false;
    this->GravityScale = 0.00f;
    this->MinAcceleration = 0.00f;
    this->MaxAcceleration = 0.00f;
    this->GroundFriction = 0.00f;
    this->BrakingDeceleration = 0.00f;
    this->bUseSeparateBrakingFriction = false;
    this->BrakingFrictionFactor = 0.00f;
    this->BrakingFriction = 0.00f;
    this->bTransitionRulesEnabled = false;
}

