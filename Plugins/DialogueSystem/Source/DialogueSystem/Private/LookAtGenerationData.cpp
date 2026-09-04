#include "LookAtGenerationData.h"

FLookAtGenerationData::FLookAtGenerationData() {
    this->LookAtType = ELookAtType::None;
    this->bUseSeparateOffsets = false;
    this->Blink = 0.00f;
    this->ClearHeadAnimation = 0.00f;
    this->bEnableHandIK = false;
}

