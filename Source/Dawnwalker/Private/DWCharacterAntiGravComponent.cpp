#include "DWCharacterAntiGravComponent.h"

UDWCharacterAntiGravComponent::UDWCharacterAntiGravComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GravityDirectionInterpolator = 2.50f;
    this->AntiGravMaxFloorDistance = 200.00f;
    this->AntiGravNormalPredictionDistance = 100.00f;
    this->WallPredictionRate = 2.00f;
    this->WallContactMaxDistance = 70.00f;
    this->WallContactMinStride = 35.00f;
    this->WallMinStepDownHeight = 150.00f;
    this->WallMinSlopeDownHeight = 5.00f;
    this->OutsideCornerDistance = 100.00f;
    this->InsideCornerDistance = 150.00f;
    this->GroundCornerDistance = 250.00f;
    this->LedgeTransitionAngle = 30.00f;
    this->LedgeTransitionDistance = 90.00f;
    this->LedgeTransitionRange = 300.00f;
    this->AntiGravMaxSlopeHeight = 70.00f;
    this->TransitionPlayRate = 0.40f;
    this->FloorRadius = 50.00f;
    this->LedgeProbeRadius = 15.00f;
    this->bEnableTransitions = true;
    this->bEnableLedgeTransitionTest = true;
    this->bEnableCornerTransitionTest = true;
    this->AntiGravToClawRideMontage = NULL;
    this->NoiseRenderTarget = NULL;
    this->NoiseMaterial = NULL;
    this->AntiGravFX = NULL;
    this->AntiGravFXTargetMeshType = EBodyMeshType::Torso;
    this->AntiGravMaterialIndex = 0;
}

void UDWCharacterAntiGravComponent::StoreCurrentState() {
}

void UDWCharacterAntiGravComponent::StopAntiGravMode() {
}

bool UDWCharacterAntiGravComponent::StartClawRide() {
    return false;
}

void UDWCharacterAntiGravComponent::RestoreLastStoredState() {
}

void UDWCharacterAntiGravComponent::RequestTransition() {
}

void UDWCharacterAntiGravComponent::RequestCancelAntiGrav() {
}

void UDWCharacterAntiGravComponent::OnTransitionFinished(bool bWasInterrupted) {
}

void UDWCharacterAntiGravComponent::OnClawRideTransitionEnd(bool bWasInterrupted, bool bIsClawRiding) {
}

EDawnwalkerAntiGravSurfaceType UDWCharacterAntiGravComponent::GetAntiGravSurfaceType() const {
    return EDawnwalkerAntiGravSurfaceType::Ground;
}

FVector UDWCharacterAntiGravComponent::GetAntiGravNormal() const {
    return FVector{};
}

EDWAntiGravModeStatus UDWCharacterAntiGravComponent::GetAntiGravModeStatus() const {
    return EDWAntiGravModeStatus::Undefined;
}

bool UDWCharacterAntiGravComponent::GetAntiGravModeEnabled() const {
    return false;
}

void UDWCharacterAntiGravComponent::CancelAntiGravAbility() {
}


