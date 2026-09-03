#include "PartRemoverSettings.h"

FPartRemoverSettings::FPartRemoverSettings() {
    this->PartRemoverThresholdType = EPartRemoverThresholdType::PhysicalSize;
    this->Threshold = 0.00f;
    this->UseSurfaceArea = false;
    this->UseVertexLocks = false;
}

