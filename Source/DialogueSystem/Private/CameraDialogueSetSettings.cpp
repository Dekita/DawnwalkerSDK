#include "CameraDialogueSetSettings.h"

FCameraDialogueSetSettings::FCameraDialogueSetSettings() {
    this->CameraShot = ECameraShot::None;
    this->AdjustmentMode = ECameraAdjustmentMode::None;
    this->ShakeClass = NULL;
    this->CurrentFocalLength = 0.00f;
    this->CurrentAperture = 0.00f;
    this->bAutomaticFocusEnabled = false;
}

