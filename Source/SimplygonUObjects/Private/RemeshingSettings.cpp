#include "RemeshingSettings.h"

FRemeshingSettings::FRemeshingSettings() {
    this->RemeshingTarget = ERemeshingTarget::OnScreenSize;
    this->OnScreenSize = 0;
    this->MaxDeviation = 0.00f;
    this->MaxDerivedOnScreenSize = 0;
    this->RemeshingMode = ERemeshingMode::Outside;
    this->HoleFilling = EHoleFilling::Disabled;
    this->RemeshingModeManualPositionX = 0.00f;
    this->RemeshingModeManualPositionY = 0.00f;
    this->RemeshingModeManualPositionZ = 0.00f;
    this->SurfaceTransferMode = ESurfaceTransferMode::Fast;
    this->HardEdgeAngle = 0.00f;
    this->TransferNormals = false;
    this->TransferColors = false;
    this->LimitMaxEdgeLength = false;
    this->MaxEdgeLength = 0.00f;
    this->PopulateAttributeTessellationDisplacement = false;
    this->GeometricalAccuracy = 0.00f;
    this->TopologicalAccuracy = 0.00f;
    this->ProcessSelectionSetID = 0;
    this->KeepUnprocessedSceneMeshes = false;
    this->ForceSoftEdgesWithinTextureCharts = false;
}

