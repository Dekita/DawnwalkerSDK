#include "BiomesPCGMaskSettings.h"

UBiomesPCGMaskSettings::UBiomesPCGMaskSettings() {
    this->MaskType = EBiomesPCGMaskType::MaterialMask;
    this->Mask = EBiomesPCGMaskDataSource::SpeciesGrowth;
    this->FallbackValue = 0.00f;
}


