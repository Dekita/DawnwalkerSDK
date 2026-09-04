#include "SkyCreatorSkyAtmosphereSettings.h"

FSkyCreatorSkyAtmosphereSettings::FSkyCreatorSkyAtmosphereSettings() {
    this->RayleighScatteringScale = 0.00f;
    this->bUseRayleighScatteringScaleCurve = false;
    this->bUseRayleighScatteringCurve = false;
    this->RayleighExponentialDistribution = 0.00f;
    this->bUseRayleighExponentialDistributionCurve = false;
    this->MieScatteringScale = 0.00f;
    this->bUseMieScatteringScaleCurve = false;
    this->bUseMieScatteringCurve = false;
    this->MieAbsorptionScale = 0.00f;
    this->bUseMieAbsorptionScaleCurve = false;
    this->bUseMieAbsorptionCurve = false;
    this->MieAnisotropy = 0.00f;
    this->bUseMieAnisotropyCurve = false;
    this->MieExponentialDistribution = 0.00f;
    this->bUseMieExponentialDistributionCurve = false;
    this->AbsorptionScale = 0.00f;
    this->bUseAbsorptionScaleCurve = false;
    this->bUseAbsorptionCurve = false;
    this->bUseSkyLuminanceFactorCurve = false;
    this->bUseGroundAlbedoCurve = false;
    this->HeightFogContribution = 0.00f;
    this->bUseHeightFogContributionCurve = false;
}

