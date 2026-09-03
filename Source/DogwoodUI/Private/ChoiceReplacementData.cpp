#include "ChoiceReplacementData.h"

FChoiceReplacementData::FChoiceReplacementData() {
    this->ReplacementMode = EReplacementMode::AlwaysVisible;
    this->EffectData = NULL;
    this->ChoiceToReplace = 0;
    this->TimeLeftUntilReplacementToggle = 0.00f;
    this->bIsCurrentlyReplaced = false;
}

