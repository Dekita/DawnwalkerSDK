#include "VisibilitySettings.h"

FVisibilitySettings::FVisibilitySettings() {
    this->VisibilityCameraMode = EVisibilityCameraMode::Manual;
    this->HemisphereUpVector = EHemisphereUpVector::PositiveX;
    this->HemisphereCoverageAngle = 0.00f;
    this->HemisphereFidelity = 0;
    this->SphereFidelity = 0;
    this->CameraSelectionSetID = 0;
    this->OccluderSelectionSetID = 0;
    this->RemoveTrianglesNotOccludingOtherTriangles = false;
    this->FillNonVisibleAreaThreshold = 0.00f;
    this->ForceVisibilityCalculation = false;
    this->ConservativeMode = false;
    this->CullOccludedGeometry = false;
    this->VisibilityWeightsPower = 0.00f;
    this->UseVisibilityWeightsInTexcoordGenerator = false;
    this->UseVisibilityWeightsInReducer = false;
    this->UseBackfaceCulling = false;
    this->ComputeVisibilityMode = EComputeVisibilityMode::DirectX;
}

