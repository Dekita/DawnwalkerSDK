#include "DWCharacterGapSqueezeComponent.h"

UDWCharacterGapSqueezeComponent::UDWCharacterGapSqueezeComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Speed = 120.00f;
    this->EndPositionOffset = 30.00f;
    this->FrontExitDistance = 75.00f;
    this->BackwardExitDistance = 20.00f;
    this->InputAngleTolerance = 45.00f;
    this->LerpInTime = 0.50f;
    this->SqueezeLeaveBackwardsMontage = NULL;
    this->SqueezeLeaveForwardMontage = NULL;
    this->SqueezeLeaveBackwardsMontageLeft = NULL;
    this->SqueezeLeaveForwardMontageLeft = NULL;
    this->SqueezeAnimLayer = NULL;
}

void UDWCharacterGapSqueezeComponent::StartSqueeze() {
}

bool UDWCharacterGapSqueezeComponent::ShouldEnterGap(float EnterRotation) {
    return false;
}

void UDWCharacterGapSqueezeComponent::LeaveSqueezeEntry() {
}

void UDWCharacterGapSqueezeComponent::LeaveSqueeze(bool bIsLeavingBackwards, float InExitDistance) {
}

EGapSqueezeMovementState UDWCharacterGapSqueezeComponent::GetSqueezeMovementState() {
    return EGapSqueezeMovementState::None;
}

void UDWCharacterGapSqueezeComponent::CheckSqueezeEntry(USplineComponent* SplineComponent, bool bFaceToLeft, bool bIsEdge) {
}


