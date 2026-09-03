#include "FoliageSettings.h"

FFoliageSettings::FFoliageSettings() {
    this->MaintainLeafConnections = false;
    this->SeparateTrunkAndFoliage = false;
    this->SeparateFoliageTriangleRatio = 0.00f;
    this->SeparateFoliageTriangleThreshold = 0;
    this->SeparateFoliageAreaThreshold = 0.00f;
    this->SeparateFoliageSizeThreshold = 0.00f;
    this->TrunkReductionRatio = 0.00f;
}

