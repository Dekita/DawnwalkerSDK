#include "CustomGestureParams.h"

FCustomGestureParams::FCustomGestureParams() {
    this->Weight = 0.00f;
    this->position = EGesturePosition::MatchAudio;
    this->Offset = 0.00f;
    this->bOverrideStartBlend = false;
    this->StartBlend = 0.00f;
    this->bOverrideEndBlend = false;
    this->EndBlend = 0.00f;
    this->bOverrideStartTime = false;
    this->StartTime = 0.00f;
    this->bOverrideEndTime = false;
    this->EndTime = 0.00f;
}

