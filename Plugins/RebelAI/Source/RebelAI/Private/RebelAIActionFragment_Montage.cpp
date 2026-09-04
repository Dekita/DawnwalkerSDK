#include "RebelAIActionFragment_Montage.h"

FRebelAIActionFragment_Montage::FRebelAIActionFragment_Montage() {
    this->PlayRateMultiplier = 0.00f;
    this->bIgnoreRandomizedPlayrateModifiersFromAIConfig = false;
    this->MontageRandomizationType = ERebelAIMontageRandomizationType::PureRandom;
}

