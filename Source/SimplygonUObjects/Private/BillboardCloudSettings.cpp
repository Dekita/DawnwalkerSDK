#include "BillboardCloudSettings.h"

FBillboardCloudSettings::FBillboardCloudSettings() {
    this->BillboardMode = EBillboardMode::OuterShell;
    this->BillboardDensity = 0.00f;
    this->MaxPlaneCount = 0;
    this->GeometricComplexity = 0.00f;
    this->FavorVerticalPlanes = false;
    this->OpacityCutoff = 0.00f;
    this->OpacityChannelComponent = EOpacityChannelComponent::Red;
    this->TwoSided = false;
    this->UseVisibilityWeights = false;
}

