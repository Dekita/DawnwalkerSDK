#include "InteriorVolumePostProcessCurve.h"

FInteriorVolumePostProcessCurve::FInteriorVolumePostProcessCurve() {
    this->bUseExposureCompensationCurve = false;
    this->bUseMinEV100Curve = false;
    this->bUseMaxEV100Curve = false;
    this->bUseIntensityCurve = false;
    this->bUseThresholdCurve = false;
    this->bUseLocalExposureShadowContrastScaleCurve = false;
    this->bUseLocalExposureMiddleGreyBiasCurve = false;
    this->bUseWhiteTempCurve = false;
    this->bUseLumenSkylightLeakingCurve = false;
}

