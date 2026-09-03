#include "RebelCharacterAnimInstance_AnimLayer.h"

URebelCharacterAnimInstance_AnimLayer::URebelCharacterAnimInstance_AnimLayer() {
    this->LinkedAnimLayerPriority = 0;
    this->bHasFixedDirection = false;
    this->bLookAtEnabled = false;
    this->bCanTurnInPlace = false;
    this->bTargetInFOV = false;
    this->bIsMoving = false;
    this->bWantsToStop = false;
    this->bHasVelocity = false;
    this->bHasAcceleration = false;
    this->InputSize = 0.00f;
    this->InputValue = 0.00f;
    this->ForwardValue = 0.00f;
    this->RightValue = 0.00f;
    this->Speed = 0.00f;
    this->RootSpeed = 0.00f;
    this->RootYawSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->DisplacementSpeed = 0.00f;
    this->VelocityAngle = 0.00f;
    this->AccelerationAngle = 0.00f;
    this->AccelerationCounterAngle = 0.00f;
    this->StartTurnAngle = 0.00f;
    this->RequestedTurnAngle = 0.00f;
    this->FaceTargetAngle = 0.00f;
    this->RemainingTurnAngle = 0.00f;
    this->RemainingTurnAngleWeight = 0.00f;
    this->StartTransitionWeight = 0.00f;
    this->StopTransitionWeight = 0.00f;
    this->PivotTransitionWeight = 0.00f;
    this->SpeedUpTransitionWeight = 0.00f;
    this->SlowDownTransitionWeight = 0.00f;
    this->TransitionWeight = 0.00f;
    this->FallLandWeight = 0.00f;
    this->CrouchPoseWeight = 0.00f;
    this->RunWeight = 0.00f;
    this->CycleWeight = 0.00f;
    this->RequestedMoveAngle = 0.00f;
    this->TurnAngleOvershoot = 0.00f;
    this->InitialStartTurnAngle = 0.00f;
    this->StartTurnAngleDelta = 0.00f;
    this->TurnAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->AimYaw = 0.00f;
    this->AimMaxSpeed = 120.00f;
    this->AimStopAngle = 3.00f;
    this->AimSpeedBlendInTime = 0.20f;
    this->AimSpeedBlendOutTime = 0.20f;
    this->AimPitch = 0.00f;
    this->DesiredAimYaw = 0.00f;
    this->DesiredAimPitch = 0.00f;
    this->LocomotionCycleState = 0.00f;
    this->bIsCrouching = false;
    this->bWasCrouching = false;
    this->bIsOnGround = false;
    this->bIsFalling = false;
    this->bIsFlying = false;
    this->bIsPlayingRootMotion = false;
    this->bHasCustomGravity = false;
    this->bIsGroundWalkable = false;
    this->bIsGroundSlideable = false;
    this->bIsGroundLedge = false;
    this->bIsJumping = false;
    this->bWasJumping = false;
    this->bCrouchStateChange = false;
    this->TimeToJumpApex = 0.00f;
    this->TimeFromJumpApex = 0.00f;
    this->GroundDistance = 0.00f;
    this->LedgeDistance = 0.00f;
    this->ActorLedgeAngle = 0.00f;
    this->InputLedgeAngle = 0.00f;
    this->ActorImpactAngle = 0.00f;
    this->FaceToGravityAngle = 0.00f;
    this->StopDistance = 0.00f;
    this->VelocitySyncMode = ERebelVelocitySyncMode::AnimDriven;
    this->RotationSyncMode = ERebelRotationSyncMode::AnimDriven;
    this->bStrideWarpingEnabled = false;
    this->bCycleStateVelocitySyncEnabled = false;
    this->CyclePlayRate = 0.00f;
    this->RootSpeedScale = 0.00f;
    this->bUseHandIK = false;
    this->bUseRightHand = false;
    this->bUseLeftHand = false;
    this->TimeToRandomIdle = 0.00f;
    this->bIsIdle = false;
    this->bWasIdle = false;
    this->bIsPlayingRandomIdle = false;
    this->bWasPlayingRandomIdle = false;
}

URebelCharacterAnimInstance* URebelCharacterAnimInstance_AnimLayer::GetMainAnimInstance() const {
    return NULL;
}


