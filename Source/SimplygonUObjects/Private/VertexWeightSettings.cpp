#include "VertexWeightSettings.h"

FVertexWeightSettings::FVertexWeightSettings() {
    this->UseVertexWeightsInReducer = false;
    this->UseVertexWeightsInTexcoordGenerator = false;
    this->WeightsFromColorLevel = 0;
    this->WeightsFromColorComponent = EWeightsFromColorComponent::Red;
    this->WeightsFromColorMultiplier = 0.00f;
    this->WeightsFromColorMode = EWeightsFromColorMode::Standard;
}

