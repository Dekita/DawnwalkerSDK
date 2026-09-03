#include "HighDensityMeshReductionSettings.h"

FHighDensityMeshReductionSettings::FHighDensityMeshReductionSettings() {
    this->OnScreenSizeEnabled = false;
    this->OnScreenSize = 0;
    this->MaxDeviationEnabled = false;
    this->MaxDeviation = 0.00f;
    this->StopCondition = EStopCondition::Any;
}

