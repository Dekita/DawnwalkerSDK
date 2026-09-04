#include "RebelHorseAnimInstance.h"

URebelHorseAnimInstance::URebelHorseAnimInstance() {
    this->bUseSpeedMappingCurve = false;
    this->SpineRotationInterpolator = 8.00f;
    this->CurrentSpeed = 0.00f;
    this->bIsMoving = false;
}

float URebelHorseAnimInstance::GetSpineBoneYaw(const int32 SpineBoneIndex) const {
    return 0.0f;
}


