#include "RebelCameraThirdPersonCollisionSettings.h"

FRebelCameraThirdPersonCollisionSettings::FRebelCameraThirdPersonCollisionSettings() {
    this->PenetrationBlendInTime = 0.00f;
    this->PenetrationBlendOutTime = 0.00f;
    this->bDoPredictiveAvoidance = false;
    this->bUsePivotAsSafeLocation = false;
    this->CollisionPushOutDistance = 0.00f;
    this->SafeLocationPlaneOffset = 0.00f;
}

