#include "DawnwalkerLookAtTargetTransientTrackingParams.h"

FDawnwalkerLookAtTargetTransientTrackingParams::FDawnwalkerLookAtTargetTransientTrackingParams() {
    this->TargetNotInFOVTimeout = 0.00f;
    this->TargetInFOVTimeout = 0.00f;
    this->LookAtConeAngle = 0.00f;
    this->TargetNotInConeTimeout = 0.00f;
    this->TargetInConeTimeout = 0.00f;
    this->ObserverMaxSpeed = 0.00f;
}

