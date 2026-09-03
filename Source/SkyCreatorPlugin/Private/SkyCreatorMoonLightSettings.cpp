#include "SkyCreatorMoonLightSettings.h"

FSkyCreatorMoonLightSettings::FSkyCreatorMoonLightSettings() {
    this->Intensity = 0.00f;
    this->bUseIntensityCurve = false;
    this->bUseLightColorCurve = false;
    this->Temperature = 0.00f;
    this->bUseTemperatureCurve = false;
    this->VolumetricScatteringIntensity = 0.00f;
    this->bUseVolumetricScatteringIntensityCurve = false;
    this->bUseAtmosphereDiskColorScaleCurve = false;
    this->bUseCloudScatteredLuminanceScaleCurve = false;
    this->CloudShadowStrength = 0.00f;
    this->bUseCloudShadowStrengthCurve = false;
    this->CloudShadowOnAtmosphereStrength = 0.00f;
    this->bUseCloudShadowOnAtmosphereStrengthCurve = false;
    this->CloudShadowOnSurfaceStrength = 0.00f;
    this->bUseCloudShadowOnSurfaceStrengthCurve = false;
}

