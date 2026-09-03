#include "Wound.h"

FWound::FWound() {
    this->WoundType = NULL;
    this->bIsStatusEffect = false;
    this->bIsMitigated = false;
    this->SourceAbilityType = EFocusAbilityType::None;
    this->Handle = 0;
}

