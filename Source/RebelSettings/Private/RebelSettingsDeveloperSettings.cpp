#include "RebelSettingsDeveloperSettings.h"

URebelSettingsDeveloperSettings::URebelSettingsDeveloperSettings() {
    this->bTakeOverEditorSettings = true;
    this->bUsesAllowPostProcessBlendablesQuality = false;
    this->AllowPostProcessBlendablesQuality = ERebelQuality::Medium;
    this->AmbientOcclusionMethod = ERebelAmbientOcclusionMethod::ScreenSpaceAmbientOcclusion;
    this->bUsesAllowAmbientOcclusionQuality = false;
    this->AllowAmbientOcclusionQuality = ERebelQuality::Medium;
    this->bUsesAllowFogQuality = false;
    this->AllowFogQuality = ERebelQuality::Low;
    this->bUsesAllowVolumetricFogQuality = false;
    this->AllowVolumetricFogQuality = ERebelQuality::Medium;
    this->bUsesAllowScreenSpaceReflectionsQuality = false;
    this->AllowScreenSpaceReflectionsQuality = ERebelQuality::Low;
    this->bUsesAllowLumenReflectionsQuality = false;
    this->AllowLumenReflectionsQuality = ERebelQuality::High;
    this->CinematicModeOptimizations.AddDefaulted(7);
    this->ScreenSpaceAmbientOcclusionMaxQuality[0] = 0.00f;
    this->ScreenSpaceAmbientOcclusionMaxQuality[1] = 0.00f;
    this->ScreenSpaceAmbientOcclusionMaxQuality[2] = 0.00f;
    this->ScreenSpaceAmbientOcclusionMaxQuality[3] = 0.00f;
    this->ScreenSpaceAmbientOcclusionMaxQuality[4] = 0.00f;
    this->ScreenSpaceAmbientOcclusionMaxQuality[5] = 0.00f;
}

URebelSettingsDeveloperSettings* URebelSettingsDeveloperSettings::Get() {
    return NULL;
}


