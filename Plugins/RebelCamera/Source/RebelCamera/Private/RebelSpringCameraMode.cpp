#include "RebelSpringCameraMode.h"

URebelSpringCameraMode::URebelSpringCameraMode() {
    this->ViewPitchAngle = 40.00f;
    this->ViewYawAngleRight = 60.00f;
    this->ViewYawAngleLeft = 60.00f;
    this->bOverridePitchAngle = false;
    this->ViewPitchAngleUp = 40.00f;
    this->ViewPitchAngleBottom = 40.00f;
    this->bOverrideCurrentCameraPith = false;
    this->CurrentCameraPitch = 0.00f;
    this->bEnableCustomVerticalMovement = false;
    this->ZOffsetMax = 30.00f;
    this->ZOffsetTime = 1.00f;
}


