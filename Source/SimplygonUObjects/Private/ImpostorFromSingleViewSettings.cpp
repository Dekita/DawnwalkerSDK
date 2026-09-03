#include "ImpostorFromSingleViewSettings.h"

FImpostorFromSingleViewSettings::FImpostorFromSingleViewSettings() {
    this->UseTightFitting = false;
    this->TightFittingDepthOffset = 0.00f;
    this->TwoSided = false;
    this->TexCoordPadding = 0.00f;
    this->UseOverrideCenterAndRadius = false;
    this->OverrideRadius = 0.00f;
    this->OverrideCenterX = 0.00f;
    this->OverrideCenterY = 0.00f;
    this->OverrideCenterZ = 0.00f;
}

