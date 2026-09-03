#include "MovieSceneLookAtSectionData.h"

FMovieSceneLookAtSectionData::FMovieSceneLookAtSectionData() {
    this->LookAtType = ELookAtType::None;
    this->bUseSeparateOffsets = false;
    this->ClearHeadAnimation = 0.00f;
    this->bPreviousTargetAmbiguous = false;
    this->bEnableHandIK = false;
    this->EyeInterpolationSpeed = 0.00f;
}

