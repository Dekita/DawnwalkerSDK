#include "CharacterLadderUserComponent.h"

UCharacterLadderUserComponent::UCharacterLadderUserComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClimbSpeed = 75.00f;
    this->LadderMappingContext = NULL;
    this->LadderDropAction = NULL;
    this->LadderSlideAction = NULL;
    this->ForwardExitDistance = -30.00f;
    this->BackwardExitDistance = 20.00f;
    this->BodyXOffset = 45.00f;
    this->EndPointUpZOffset = 30.00f;
    this->EndPointDownZOffset = 30.00f;
    this->AttachmentPointUpXOffset = -10.00f;
    this->InputAngleTolerance = 60.00f;
    this->FallHeight = 75.00f;
    this->SlideMultiplier = 7.50f;
    this->JumpOffset = 80.00f;
}

bool UCharacterLadderUserComponent::ShouldEnterLadder(float EnterRotation) {
    return false;
}

void UCharacterLadderUserComponent::OnShadowstep(const FVector& DstLocation, const FRotator& DstRotation) {
}

void UCharacterLadderUserComponent::LeaveLadderTrigger(ULadderComponentBase* InLadder) {
}

void UCharacterLadderUserComponent::LeaveLadder(bool bIsLeavingBackwards) {
}

ELadderMovementState UCharacterLadderUserComponent::GetLadderMovementState() {
    return ELadderMovementState::None;
}

void UCharacterLadderUserComponent::EnterLadder() {
}

void UCharacterLadderUserComponent::CheckLadderEnter(ULadderComponentBase* InLadder, bool bWithoutTrigger) {
}


