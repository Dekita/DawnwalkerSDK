#include "CameraDialogueSetSettingsOverride.h"

FCameraDialogueSetSettingsOverride::FCameraDialogueSetSettingsOverride() {
    this->bOverrideManualFocusDistance = false;
    this->ManualFocusDistance = 0.00f;
    this->bOverrideCurrentFocalLength = false;
    this->CurrentFocalLength = 0.00f;
    this->bOverrideCurrentAperture = false;
    this->CurrentAperture = 0.00f;
    this->bOverrideCameraShakeClass = false;
    this->ShakeClass = NULL;
}

