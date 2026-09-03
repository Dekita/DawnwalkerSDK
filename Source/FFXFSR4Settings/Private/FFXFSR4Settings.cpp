#include "FFXFSR4Settings.h"

UFFXFSR4Settings::UFFXFSR4Settings() {
    this->bEnabled = false;
    this->bAutoExposure = false;
    this->bEnabledInEditorViewport = false;
    this->bUseSSRExperimentalDenoiser = false;
    this->bFrameGenEnabled = false;
    this->bCaptureDebugUI = false;
    this->bUpdateGlobalFrameTime = false;
    this->bModifySlateDeltaTime = false;
    this->UIMode = EFFXFSR4FrameGenUIMode::SlateRedraw;
    this->bUseDistortionTexture = false;
    this->bD3D12AsyncInterpolation = false;
    this->bD3D12AsyncPresent = false;
    this->QualityMode = EFFXFSR4QualityMode::NativeAA;
    this->HistoryFormat = EFFXFSR4HistoryFormat::FloatRGBA;
    this->DeDither = EFFXFSR4DeDitherMode::Off;
    this->Sharpness = 0.00f;
    this->bAdjustMipBias = false;
    this->bForceVertexDeformationOutputsVelocity = false;
    this->ForceLandscapeHISMMobility = EFFXFSR4LandscapeHISMMode::Off;
    this->VelocityFactor = 0.00f;
    this->bReactiveMask = false;
    this->ReflectionScale = 0.00f;
    this->ReflectionLuminanceBias = 0.00f;
    this->RoughnessScale = 0.00f;
    this->RoughnessBias = 0.00f;
    this->RoughnessMaxDistance = 0.00f;
    this->bReactiveMaskRoughnessForceMaxDistance = false;
    this->TranslucencyBias = 0.00f;
    this->TranslucencyLuminanceBias = 0.00f;
    this->TranslucencyMaxDistance = 0.00f;
    this->ReactiveShadingModelID = MSM_Unlit;
    this->ForceReactiveMaterialValue = 0.00f;
    this->ReactiveHistoryTranslucencyBias = 0.00f;
    this->ReactiveHistoryTranslucencyLumaBias = 0.00f;
    this->PreDOFTranslucencyScale = 0.00f;
    this->bPreDOFTranslucencyMax = false;
    this->ReactiveMaskDeferredDecalScale = 0.00f;
    this->ReactiveHistoryDeferredDecalScale = 0.00f;
    this->ReactiveMaskTAAResponsiveValue = 0.00f;
    this->ReactiveHistoryTAAResponsiveValue = 0.00f;
    this->ReactiveMaskCustomStencilScale = 0.00f;
    this->ReactiveHistoryCustomStencilScale = 0.00f;
    this->CustomStencilMask = 0;
    this->CustomStencilShift = 0;
}


