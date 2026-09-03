#include "RebelTraversalComponent.h"

URebelTraversalComponent::URebelTraversalComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableMantling = true;
    this->MantleTestDistance = 100.00f;
    this->LowMantleThreshold = 125.00f;
    this->MantleTimelineCurve = NULL;
    this->MantleObjectDetectionProfile = TEXT("IgnoreOnlyPawn");
    this->WalkableSurfaceDetectionChannel = ECC_Visibility;
    this->MantleHeight = 0.00f;
    this->AcceptableVelocityWhileMantling = 10.00f;
    this->OwnerCharacter = NULL;
    this->MovementComponent = NULL;
}

void URebelTraversalComponent::OnRagdolInputTagActivated(const FGameplayTag CallbackTag, int32 NewCount) {
}

void URebelTraversalComponent::OnJumpActivated() {
}

void URebelTraversalComponent::MantleUpdate(float BlendIn) {
}

bool URebelTraversalComponent::MantleStart(const FRebelLocomotionComponentAndTransform& MantleLedgeWS, ERebelLocomotionMantleType MantleType) {
    return false;
}

void URebelTraversalComponent::MantleEnd() {
}

bool URebelTraversalComponent::MantleCheck(const FRebelLocomotionMantleTraceSettings& TraceSettings, TEnumAsByte<EMovementMode> MovementMode) {
    return false;
}

bool URebelTraversalComponent::IsTraversalBlocked() {
    return false;
}


