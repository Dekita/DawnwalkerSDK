#include "RebelCharacterMovement.h"

URebelCharacterMovement::URebelCharacterMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GroundTraceDistance = 100000.00f;
    this->bForceLockToNavMesh = false;
    this->bAsync = true;
    this->WallSafeDistance = 0.50f;
    this->bEnableWallHitResponse = false;
    this->WallSlideMinNormalDot = -0.80f;
    this->WallHitMaxDistance = 2.00f;
    this->WallNewHitNormalMaxDot = 0.87f;
    this->WallHitBlockingInterpolator = 2.00f;
    this->WallHitUnblockingInterpolator = 4.00f;
    this->RootSpeedXCurve = TEXT("RootSpeedX");
    this->RootSpeedYCurve = TEXT("RootSpeedY");
    this->RootSpeedZCurve = TEXT("RootSpeedZ");
    this->RootSpeedWeightCurve = TEXT("RootSpeedWeight");
    this->RootYawSpeedCurve = TEXT("RootYawSpeed");
    this->RootYawSpeedWeightCurve = TEXT("RootYawSpeedWeight");
    this->RootSpeedScaleDeltaCurve = TEXT("RootSpeedScaleDelta");
    this->TurnTransitionCurve = TEXT("RemainingTurnAngleWeight");
    this->StartTransitionCurve = TEXT("StartTransitionWeight");
    this->StopTransitionCurve = TEXT("StopTransitionWeight");
    this->PivotTransitionCurve = TEXT("PivotTransitionWeight");
    this->RotationSmoothingTime = 0.20f;
    this->RotationSmoothingRate = 0.25f;
    this->CurrentMovementProfile = NULL;
    this->CurrentRotationMode = ERebelRotationMode::None;
    this->CurrentLookAtMode = ERebelLookAtMode::None;
    this->CurrentVelocitySyncMode = ERebelVelocitySyncMode::None;
    this->CurrentRotationSyncMode = ERebelRotationSyncMode::None;
    this->CachedAnimInstance = NULL;
    this->TraversalComponent = NULL;
}

void URebelCharacterMovement::UpdateWarpTargetYaw() {
}

void URebelCharacterMovement::SetWarpTargetYaw(float InTargetYaw) {
}

void URebelCharacterMovement::SetTickOptimizationEnabled(bool bEnabled) {
}

void URebelCharacterMovement::SetOverrideInputSize(float Value) {
}

void URebelCharacterMovement::ResetOverrideInputSize() {
}

int32 URebelCharacterMovement::PushTransitionRules(const FRebelLocomotionAnimTransitionRules& TransitionRules, const uint8 Priority) {
    return 0;
}

int32 URebelCharacterMovement::PushRotationMode(const ERebelRotationMode RotationMode, const uint8 Priority) {
    return 0;
}

int32 URebelCharacterMovement::PushMovementProfile(const URebelCharacterMovementProfile* MovementProfile) {
    return 0;
}

int32 URebelCharacterMovement::PushLookAtMode(const ERebelLookAtMode LookAtMode, const uint8 Priority) {
    return 0;
}

bool URebelCharacterMovement::PopTransitionRules(int32 Handle) {
    return false;
}

bool URebelCharacterMovement::PopRotationMode(int32 Handle) {
    return false;
}

bool URebelCharacterMovement::PopMovementProfile(int32 Handle) {
    return false;
}

bool URebelCharacterMovement::PopLookAtMode(int32 Handle) {
    return false;
}

bool URebelCharacterMovement::HasMovementInput() const {
    return false;
}

bool URebelCharacterMovement::GetTargetInFOV() const {
    return false;
}

float URebelCharacterMovement::GetOverrideInputSize() {
    return 0.0f;
}

bool URebelCharacterMovement::GetLockToNavMesh() const {
    return false;
}

bool URebelCharacterMovement::GetIsFacingTarget() const {
    return false;
}

float URebelCharacterMovement::GetInputAngle() const {
    return 0.0f;
}

ERebelRotationMode URebelCharacterMovement::GetCurrentRotationMode() const {
    return ERebelRotationMode::None;
}

URebelCharacterMovementProfile* URebelCharacterMovement::GetCurrentMovementProfile() const {
    return NULL;
}

bool URebelCharacterMovement::CanJump() const {
    return false;
}


