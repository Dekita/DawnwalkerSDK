#include "AnimNotify_AAVibration.h"

UAnimNotify_AAVibration::UAnimNotify_AAVibration() {
    this->Effect = NULL;
    this->bFallbackToPreset = true;
    this->VibrationPreset = EVibrationPreset::WeakShortConstant;
    this->bLoop = false;
    this->bStop = false;
}


