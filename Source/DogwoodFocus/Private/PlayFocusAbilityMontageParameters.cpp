#include "PlayFocusAbilityMontageParameters.h"

FPlayFocusAbilityMontageParameters::FPlayFocusAbilityMontageParameters() {
    this->bShouldRotateToTarget = false;
    this->bPlayTargetMontageOnEvent = false;
    this->bSkipTargetReactions = false;
    this->MontageType = EFocusAttackSequenceType::Hit;
    this->bMontagesLoaded = false;
    this->LoadedCoenMontage = NULL;
    this->LoadedCoenFaceMontage = NULL;
    this->HandleIndex = 0;
    this->bFinished = false;
}

