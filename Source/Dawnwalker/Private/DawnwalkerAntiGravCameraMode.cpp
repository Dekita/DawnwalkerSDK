#include "DawnwalkerAntiGravCameraMode.h"

UDawnwalkerAntiGravCameraMode::UDawnwalkerAntiGravCameraMode() {
    this->AntiGravNormalInterpolator = 2.50f;
    this->WallPitchAngleMin = -60.00f;
    this->WallPitchAngleMax = 60.00f;
    this->WallYawAngleMin = -45.00f;
    this->WallYawAngleMax = 45.00f;
    this->CeilingPitchAngleMin = -45.00f;
    this->CeilingPitchAngleMax = 0.00f;
    this->bUseExitPitchAfterClimbUp = true;
    this->ExitPitchAfterClimbUp = -15.00f;
}


