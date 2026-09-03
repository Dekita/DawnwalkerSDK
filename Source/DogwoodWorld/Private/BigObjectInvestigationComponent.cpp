#include "BigObjectInvestigationComponent.h"

UBigObjectInvestigationComponent::UBigObjectInvestigationComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->HorizontalMovementExtent = 100.00f;
    this->VerticalMovementExtent = 50.00f;
    this->VerticalAngleExtent = 20.00f;
    this->HorizontalAngleExtent = 20.00f;
    this->ViewTargetBlendInTime = 0.50f;
    this->ViewTargetBlendOutTime = 0.50f;
    this->bShowPlayerDuringInvestigation = false;
    this->ViewTargetBlendFunc = VTBlend_Cubic;
    this->ViewTargetBlendExponent = 1.00f;
    this->SpawnedCameraActor = NULL;
}

FTransform UBigObjectInvestigationComponent::GetPointCameraTransform(const FInvestigationPointData& Data) const {
    return FTransform{};
}

FTransform UBigObjectInvestigationComponent::GetInvestigationOriginCameraTransform() const {
    return FTransform{};
}

FRotator UBigObjectInvestigationComponent::GetInvestigationCameraRotation() const {
    return FRotator{};
}

FVector UBigObjectInvestigationComponent::GetInvestigationCameraLocation() const {
    return FVector{};
}


