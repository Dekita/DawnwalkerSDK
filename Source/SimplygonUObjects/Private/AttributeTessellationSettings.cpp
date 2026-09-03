#include "AttributeTessellationSettings.h"

FAttributeTessellationSettings::FAttributeTessellationSettings() {
    this->EnableAttributeTessellation = false;
    this->AttributeTessellationDensityMode = EAttributeTessellationDensityMode::RelativeArea;
    this->TransformationSpace = ETransformationSpace::Global;
    this->MaxAreaOfTessellatedValue = 0.00f;
    this->MaxLengthOfTessellatedValue = 0.00f;
    this->OnScreenSize = 0;
    this->OnlyAllowOneLevelOfDifference = false;
    this->MinTessellationLevel = 0;
    this->MaxTessellationLevel = 0;
    this->MaxTotalValuesCount = 0;
}

