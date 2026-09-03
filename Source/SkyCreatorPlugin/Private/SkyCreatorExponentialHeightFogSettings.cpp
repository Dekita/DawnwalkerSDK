#include "SkyCreatorExponentialHeightFogSettings.h"

FSkyCreatorExponentialHeightFogSettings::FSkyCreatorExponentialHeightFogSettings() {
    this->FogDensity = 0.00f;
    this->bUseFogDensityCurve = false;
    this->FogHeightFalloff = 0.00f;
    this->bUseFogHeightFalloffCurve = false;
    this->bUseFogInscatteringColorCurve = false;
    this->FogStartDistance = 0.00f;
    this->bUseFogStartDistanceCurve = false;
    this->SecondFogDensity = 0.00f;
    this->bUseSecondFogDensityCurve = false;
    this->SecondFogHeightFalloff = 0.00f;
    this->bUseSecondFogHeightFalloffCurve = false;
    this->DirectionalInscatteringExponent = 0.00f;
    this->bUseDirectionalInscatteringExponentCurve = false;
    this->DirectionalInscatteringStartDistance = 0.00f;
    this->bUseDirectionalInscatteringStartDistanceCurve = false;
    this->bUseDirectionalInscatteringColorCurve = false;
    this->VolumetricFogScatteringDistribution = 0.00f;
    this->bUseVolumetricFogScatteringDistributionCurve = false;
    this->bUseVolumetricFogAlbedoCurve = false;
    this->bUseVolumetricFogEmissiveCurve = false;
    this->VolumetricFogExtinctionScale = 0.00f;
    this->bUseVolumetricFogExtinctionScaleCurve = false;
    this->VolumetricFogStartDistance = 0.00f;
    this->bUseVolumetricFogStartDistanceCurve = false;
    this->VolumetricFogNearFadeInDistance = 0.00f;
    this->bUseVolumetricFogNearFadeInDistanceCurve = false;
}

