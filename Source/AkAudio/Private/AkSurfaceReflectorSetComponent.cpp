#include "AkSurfaceReflectorSetComponent.h"

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSurfaceReflectors = true;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->bBypassPortalSubtraction = false;
    this->bSolid = false;
}

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::UpdateAcousticProperties(TArray<FAkSurfacePoly> in_AcousticPolys) {
}

void UAkSurfaceReflectorSetComponent::SetTransmissionLoss(TArray<int32>& InSurfaceIndexesToEdit, float InTransmissionLoss, bool bInEnableSurface) {
}

void UAkSurfaceReflectorSetComponent::SetSurfaceProperties(TArray<int32>& InSurfaceIndexesToEdit, FAkSurfacePoly InSurfaceProperties) {
}

void UAkSurfaceReflectorSetComponent::SetEnableSurface(TArray<int32>& InSurfaceIndexesToEdit, bool bInEnableSurface) {
}

void UAkSurfaceReflectorSetComponent::SetEnableDiffraction(bool bInEnableDiffraction, bool bInEnableDiffractionOnBoundaryEdges) {
}

void UAkSurfaceReflectorSetComponent::SetEnable(bool bInEnable) {
}

void UAkSurfaceReflectorSetComponent::SetAcousticTexture(TArray<int32>& InSurfaceIndexesToEdit, UAkAcousticTexture* InAcousticTexture, bool bInEnableSurface) {
}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
}


