#include "RebelCinematicModeCvarDescriptor.h"

FRebelCinematicModeCvarDescriptor::FRebelCinematicModeCvarDescriptor() {
    this->OverrideMode = ERebelCinematicSettingOverrideMode::FlatOverride;
    this->ValueDuringCinematic = 0.00f;
    this->ValueOutsideCinematic = 0.00f;
    this->SettingResponsible = ERebelSetting::Invalid;
    this->MaxQualityToDropDown = ERebelQuality::Never;
    this->MinQualityToBumpUp = ERebelQuality::Never;
    this->QualityOffsets[0] = 0.00f;
    this->QualityOffsets[1] = 0.00f;
    this->QualityOffsets[2] = 0.00f;
    this->QualityOffsets[3] = 0.00f;
    this->QualityOffsets[4] = 0.00f;
    this->QualityOffsets[5] = 0.00f;
}

