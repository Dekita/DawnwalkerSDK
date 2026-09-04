#include "DWCharacterClawRideComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/TimelineComponent.h"

UDWCharacterClawRideComponent::UDWCharacterClawRideComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TimelineCurve = CreateDefaultSubobject<UCurveFloat>(TEXT("Timeline Curve"));
    this->TransitionTimeline = CreateDefaultSubobject<UTimelineComponent>(TEXT("Claw Ride Transition Timeline"));
    this->LedgeCheckDistance = 100.00f;
    this->ClawRideCornerDistance = 250.00f;
    this->ClawRideInstantStartCondition = NULL;
    this->CanClawRideOnLedgeCondition = NULL;
    this->LedgeCheckVerticalOffset = 10.00f;
    this->GroundDetectionDistance = 250.00f;
    this->MinRideableAngle = 80.00f;
    this->MaxRideableAngle = 100.00f;
    this->TimeToAccelerate = 20.00f;
    this->TimeToDecelerate = 20.00f;
    this->MaxDownwardsSpeed = 850.00f;
    this->MaxSidewaysMovementSpeed = 350.00f;
    this->MaxWallCavityDepth = 100.00f;
    this->StartingSpeed = 0.50f;
    this->WallAdjustmentRate = 1.00f;
    this->MaxClimbUpDistance = 200.00f;
    this->MinimumLedgeHeight = 300.00f;
    this->CameraBoomOffset = 100.00f;
    this->CameraPitchAfterStart = -70.00f;
    this->CameraPitchAfterEnd = -15.00f;
    this->CameraStartTransitionTime = 1.00f;
    this->CameraEndTransitionTime = 1.00f;
    this->StartDropMontageSet = NULL;
    this->StartClawRideMontageSet = NULL;
    this->EndDropMontage = NULL;
    this->ClawRideToAntiGravMontage = NULL;
    this->StartRidingMontage = NULL;
    this->StopRidingMontage = NULL;
    this->ClimbMontage = NULL;
    this->JumpAwayMontage = NULL;
    this->ClawRideLayers = NULL;
    this->Effect = NULL;
    this->SlideParticles = NULL;
    this->bShouldFallingFromLedgeStartClawRide = false;
    this->bShouldRide = false;
    this->bAntiGravPossible = false;
}

void UDWCharacterClawRideComponent::TransitionEnd() {
}

bool UDWCharacterClawRideComponent::RequestClawRide() {
    return false;
}

void UDWCharacterClawRideComponent::OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload) {
}

void UDWCharacterClawRideComponent::OnMontageBlendedIn(UAnimMontage* Montage) {
}

void UDWCharacterClawRideComponent::OnJumpInput(bool bValue) {
}

void UDWCharacterClawRideComponent::OnClawRideInput(bool bValue) {
}

void UDWCharacterClawRideComponent::OnAntiGravInput(bool bValue) {
}

bool UDWCharacterClawRideComponent::IsLedgeLookingDownAllowed() const {
    return false;
}

bool UDWCharacterClawRideComponent::GetIsClawRiding() const {
    return false;
}

EDawnwalkerClawRideState UDWCharacterClawRideComponent::GetClawRideState() const {
    return EDawnwalkerClawRideState::Undefined;
}

bool UDWCharacterClawRideComponent::GetBestDirectionFromLedge(FVector& BestDirection) const {
    return false;
}

void UDWCharacterClawRideComponent::ExitClawRideGracefully() {
}


