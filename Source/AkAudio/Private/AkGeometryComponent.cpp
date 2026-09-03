#include "AkGeometryComponent.h"

UAkGeometryComponent::UAkGeometryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeshType = AkMeshType::CollisionMesh;
    this->LOD = 0;
    this->WeldingThreshold = 0.00f;
    this->bEnableDiffraction = true;
    this->bEnableDiffractionOnBoundaryEdges = false;
    this->bBypassPortalSubtraction = false;
    this->bSolid = false;
}

void UAkGeometryComponent::UpdateGeometry() {
}

bool UAkGeometryComponent::SetTransmissionLossOverride(UMaterialInterface* InMaterialInterface, float InTransmissionLoss, bool bInEnableTransmissionLossOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride) {
    return false;
}

bool UAkGeometryComponent::SetEnableTransmissionLossOverride(UMaterialInterface* InMaterialInterface, bool bInEnableTransmissionLossOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride) {
    return false;
}

void UAkGeometryComponent::SetEnableDiffraction(bool bInEnableDiffraction, bool bInEnableDiffractionOnBoundaryEdges) {
}

bool UAkGeometryComponent::SetAcousticTextureOverride(UMaterialInterface* InMaterialInterface, UAkAcousticTexture* InAcousticTexture, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride) {
    return false;
}

bool UAkGeometryComponent::SetAcousticPropertiesOverride(UMaterialInterface* InMaterialInterface, FAkGeometrySurfaceOverride InAcousticPropertiesOverride, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride) {
    return false;
}

void UAkGeometryComponent::SendGeometry() {
}

void UAkGeometryComponent::RemoveGeometry() {
}

bool UAkGeometryComponent::GetAcousticPropertiesOverride(UMaterialInterface* InMaterialInterface, FAkGeometrySurfaceOverride& OutAcousticPropertiesOverride) {
    return false;
}

void UAkGeometryComponent::ConvertMesh() {
}


