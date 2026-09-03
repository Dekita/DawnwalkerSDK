#include "SkyCreatorPostProcessSettings.h"

FSkyCreatorPostProcessSettings::FSkyCreatorPostProcessSettings() {
    this->BloomIntensity = 0.00f;
    this->BloomThreshold = 0.00f;
    this->ExposureCompensation = 0.00f;
    this->bUseExposureCompensationCurve = false;
    this->ExposureMinEV100 = 0.00f;
    this->bUseExposureMinEV100Curve = false;
    this->ExposureMaxEV100 = 0.00f;
    this->bUseExposureMaxEV100Curve = false;
    this->ExposureSpeedUp = 0.00f;
    this->bUseExposureSpeedUpCurve = false;
    this->ExposureSpeedDown = 0.00f;
    this->bUseExposureSpeedDownCurve = false;
    this->ExposureLowPercent = 0.00f;
    this->bUseExposureLowPercentCurve = false;
    this->ExposureHighPercent = 0.00f;
    this->bUseExposureHighPercentCurve = false;
    this->LumenSkylightLeaking = 0.00f;
    this->bLumenSkylightLeakingCurve = false;
    this->LocalExposureShadowContrastScale = 0.00f;
    this->bLocalExposureShadowContrastScaleCurve = false;
    this->LocalExposureShadowThreshold = 0.00f;
    this->bLocalExposureShadowThresholdCurve = false;
    this->LocalExposureMiddleGreyBias = 0.00f;
    this->bLocalExposureMiddleGreyBiasCurve = false;
}

