#include "AnimNotify_Dismemberment.h"

UAnimNotify_Dismemberment::UAnimNotify_Dismemberment() {
    this->LimbToDetach = EDismemberLimb::Head;
    this->Chance = 1.00f;
    this->bEnabled = true;
    this->Effect = NULL;
    this->bFallbackToPreset = true;
    this->VibrationPreset = EVibrationPreset::WeakShortConstant;
    this->bLoop = false;
}


