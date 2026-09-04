#include "DialogueLightSettings.h"

FDialogueLightSettings::FDialogueLightSettings() {
    this->IntensityMultiplier = 0.00f;
    this->TemperatureOffset = 0.00f;
    this->Rotation = 0.00f;
    this->DistanceScale = 0.00f;
    this->MultiCharacterDistanceScale = 0.00f;
    this->HeightOffset = 0.00f;
    this->bUseFogPlane = false;
    this->FogMultiplier = 0.00f;
    this->FogPlaneDistanceOffset = 0.00f;
    this->bOverrideLocationPreset = false;
    this->LocationPresetOverride = EDialogueLightLocation::Interior;
    this->bUseAdditionalInteriorVolume = false;
    this->KeyMultiplier = 0.00f;
    this->KeySoftSourceRadius = 0.00f;
    this->KeySpecularValue = 0.00f;
    this->KeyVolumetricScattering = 0.00f;
    this->KeyAttenuationRadius = 0.00f;
    this->bUseStrongestNearbyLightPropertiesForKeyLight = false;
    this->bIgnoreStrongestNearbyLight = false;
}

