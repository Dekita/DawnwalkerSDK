#include "SkyCreatorSkyLightSettings.h"

FSkyCreatorSkyLightSettings::FSkyCreatorSkyLightSettings() {
    this->Intensity = 0.00f;
    this->bUseIntensityCurve = false;
    this->NightIntensity = 0.00f;
    this->bUseLightColorCurve = false;
    this->CloudAmbientOcclusionStrength = 0.00f;
}

