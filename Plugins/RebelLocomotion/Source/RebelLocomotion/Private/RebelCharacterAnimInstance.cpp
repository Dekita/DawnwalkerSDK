#include "RebelCharacterAnimInstance.h"
#include "Templates/SubclassOf.h"

URebelCharacterAnimInstance::URebelCharacterAnimInstance() {
    this->LocomotionCycleCurve = TEXT("LocomotionCycle");
    this->RootYawSpeedCurve = TEXT("RootYawSpeed");
    this->RemainingTurnAngleCurve = TEXT("RemainingTurnAngle");
    this->RemainingTurnAngleWeightCurve = TEXT("RemainingTurnAngleWeight");
    this->StartTransitionWeightCurve = TEXT("StartTransitionWeight");
    this->StopTransitionWeightCurve = TEXT("StopTransitionWeight");
    this->PivotTransitionWeightCurve = TEXT("PivotTransitionWeight");
    this->SpeedUpTransitionWeightCurve = TEXT("SpeedUpTransitionWeight");
    this->SlowDownTransitionWeightCurve = TEXT("SlowDownTransitionWeight");
    this->FallLandWeightCurve = TEXT("FallLandWeight");
    this->CrouchPoseWeightCurve = TEXT("CrouchPoseWeight");
    this->RandomIdleWeightCurve = TEXT("RandomIdleWeight");
    this->RunWeightCurve = TEXT("RunWeight");
    this->CycleWeightCurve = TEXT("CycleWeight");
    this->RootSpeedXCurve = TEXT("RootSpeedX");
    this->RootSpeedYCurve = TEXT("RootSpeedY");
    this->RootSpeedZCurve = TEXT("RootSpeedZ");
    this->RootSpeedWeightCurve = TEXT("RootSpeedWeight");
    this->RootYawSpeedWeightCurve = TEXT("RootYawSpeedWeight");
    this->NumLocomotionCycleKeys = 4;
    this->DisplacementValue = 0.00f;
    this->DisplacementSpeed = 0.00f;
    this->YawDelta = 0.00f;
    this->YawRotationSpeed = 0.00f;
    this->Speed = 0.00f;
    this->RootYawSpeedWeight = 0.00f;
    this->RootSpeedWeight = 0.00f;
    this->RootSpeedX = 0.00f;
    this->RootSpeedY = 0.00f;
    this->RootSpeed = 0.00f;
    this->RootSpeedZ = 0.00f;
    this->RootYawSpeed = 0.00f;
    this->StartRootSpeedX = 0.00f;
    this->StartRootSpeedY = 0.00f;
    this->StartRootYawSpeed = 0.00f;
    this->StopRootSpeedX = 0.00f;
    this->StopRootSpeedY = 0.00f;
    this->StopRootYawSpeed = 0.00f;
    this->PivotRootSpeedX = 0.00f;
    this->PivotRootSpeedY = 0.00f;
    this->PivotRootYawSpeed = 0.00f;
    this->VerticalSpeed = 0.00f;
    this->VelocityAngle = 0.00f;
    this->AccelerationAngle = 0.00f;
    this->AccelerationCounterAngle = 0.00f;
    this->StartTurnAngle = 0.00f;
    this->InitialStartTurnAngle = 0.00f;
    this->StartTurnAngleDelta = 0.00f;
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
    this->TurnAngle = 0.00f;
    this->TurnInPlaceAngle = 0.00f;
    this->AimYaw = 0.00f;
    this->AimYawMin = 0.00f;
    this->AimYawMax = 0.00f;
    this->AimPitch = 0.00f;
    this->DesiredAimYaw = 0.00f;
    this->DesiredAimPitch = 0.00f;
    this->bHasVelocity = false;
    this->bIsMoving = false;
    this->bWasMoving = false;
    this->bWantsToStop = false;
    this->Acceleration = 0.00f;
    this->InputSize = 0.00f;
    this->InputValue = 0.00f;
    this->ForwardValue = 0.00f;
    this->RightValue = 0.00f;
    this->bHasAcceleration = false;
    this->bHasFixedDirection = false;
    this->bLookAtEnabled = false;
    this->bCanTurnInPlace = false;
    this->bTargetInFOV = false;
    this->bPivotStarted = false;
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
    this->bDisableStartTransitions = false;
    this->bDisableStopTransitions = false;
    this->bDisablePivotTransitions = false;
    this->bEnableSpeedUpTransitions = false;
    this->bEnableSlowDownTransitions = false;
    this->bEnableStopWithTurnTransitions = false;
    this->bUseHandIK = false;
    this->bUseRightHand = false;
    this->bUseLeftHand = false;
    this->BaseIdleDelay = 8.00f;
    this->BaseIdleDelayRandomRange = 2.00f;
    this->NextIdleDelayModifier = 1.00f;
    this->MinIdleDelay = 4.00f;
    this->RandomIdleDelay = 0.00f;
    this->TimeToRandomIdle = 0.00f;
    this->bIsIdle = false;
    this->bWasIdle = false;
    this->bIsPlayingRandomIdle = false;
    this->bWasPlayingRandomIdle = false;
    this->IdleBreakCondition = NULL;
    this->AbilitySystemComponent = NULL;
}

void URebelCharacterAnimInstance::UpdateStartRotation() {
}

void URebelCharacterAnimInstance::SetStopStateRootMotionData(float InStopRootSpeedX, float InStopRootSpeedY, float InStopRootYawSpeed) {
}

void URebelCharacterAnimInstance::SetStartStateRootMotionData(float InStartRootSpeedX, float InStartRootSpeedY, float InStartRootYawSpeed) {
}

void URebelCharacterAnimInstance::SetPivotStateRootMotionData(float InPivotRootSpeedX, float InPivotRootSpeedY, float InPivotRootYawSpeed) {
}

void URebelCharacterAnimInstance::SetAnimSequenceUsed(const URebelLocomotionAnimSequenceSet* AnimSequenceSet, int32 AnimSequenceAssetIndex, UAnimSequence* AnimSequence) {
}

UAnimSequence* URebelCharacterAnimInstance::SelectRandomAnimSequence(const URebelLocomotionAnimSequenceSet* AnimSequenceSet, int32 AnimSequenceAssetIndex, bool& OutSyncStartPosition, TMap<FName, float>& OutAnimCurves) const {
    return NULL;
}

UAnimMontage* URebelCharacterAnimInstance::SelectMontageFromSet(const URebelLocomotionMontageSet* MontageSet) const {
    return NULL;
}

UBlendSpace* URebelCharacterAnimInstance::SelectBlendSpaceFromSet(const URebelLocomotionBlendSpaceSet* BlendSpaceSet, bool& OutSyncStartPosition, TMap<FName, float>& OutAnimCurves) const {
    return NULL;
}

UAnimSequence* URebelCharacterAnimInstance::SelectAnimSequenceFromSet(const URebelLocomotionAnimSequenceSet* AnimSequenceSet, bool& OutSyncStartPosition, TMap<FName, float>& OutAnimCurves) const {
    return NULL;
}

int32 URebelCharacterAnimInstance::SelectAnimSequenceAssetIndex(const URebelLocomotionAnimSequenceSet* AnimSequenceSet) const {
    return 0;
}

UAimOffsetBlendSpace* URebelCharacterAnimInstance::SelectAimOffsetFromSet(const URebelLocomotionAimOffsetSet* AimOffsetSet) const {
    return NULL;
}

int32 URebelCharacterAnimInstance::PushLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass, const uint8 DefaultPriority, bool bOverrideLinkedAnimLayerPriority) {
    return 0;
}

bool URebelCharacterAnimInstance::PopLinkedAnimLayersByHandle(int32 Handle) {
    return false;
}

bool URebelCharacterAnimInstance::PopLinkedAnimLayers(TSubclassOf<UAnimInstance> LinkedAnimLayersClass) {
    return false;
}

bool URebelCharacterAnimInstance::MatchAnyConditionFromSet(const URebelLocomotionConditionSet* ConditionSet) const {
    return false;
}

bool URebelCharacterAnimInstance::MatchAllConditionFromSet(const URebelLocomotionConditionSet* ConditionSet) const {
    return false;
}

float URebelCharacterAnimInstance::GetLocomotionCycleState() const {
    return 0.0f;
}

bool URebelCharacterAnimInstance::GetLinkedAnimLayersByHandle(int32 Handle, TSubclassOf<UAnimInstance>& OutLinkedAnimLayersClass) const {
    return false;
}

bool URebelCharacterAnimInstance::GetFirstUpdate() const {
    return false;
}

void URebelCharacterAnimInstance::DumpState() {
}


