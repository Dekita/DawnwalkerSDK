#include "SkyCreatorInteriorFogSettings.h"

FSkyCreatorInteriorFogSettings::FSkyCreatorInteriorFogSettings() {
    this->bIsInteriorFogOverride = false;
    this->FogDensity = 0.00f;
    this->FogHeightFalloff = 0.00f;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->isOverrideFadeDistance = false;
    this->VolumetricFogNearFadeInDistance = 0.00f;
}

