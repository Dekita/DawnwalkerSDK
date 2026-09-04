#include "GestureDensitySettings.h"

FGestureDensitySettings::FGestureDensitySettings() {
    this->GesturesPerMinute = 0;
    this->MinGestureSpacing = 0.00f;
    this->MaxGestureSpacing = 0.00f;
    this->bAllowOverlaps = false;
    this->MaxGestureOverlap = 0.00f;
}

