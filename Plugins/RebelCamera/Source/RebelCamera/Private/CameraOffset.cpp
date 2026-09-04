#include "CameraOffset.h"

FCameraOffset::FCameraOffset() {
    this->PivotZOffset = 0.00f;
    this->bOverrideFOV = false;
    this->OverriddenFieldOfView = 0.00f;
    this->bUseOffsetPitchCurves = false;
}

