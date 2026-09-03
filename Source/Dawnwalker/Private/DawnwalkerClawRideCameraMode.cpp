#include "DawnwalkerClawRideCameraMode.h"

UDawnwalkerClawRideCameraMode::UDawnwalkerClawRideCameraMode() {
    this->bPopRemovesFromStackWhenNotOnTop = true;
    this->bUseEnterClawRidePitch = true;
    this->EnterClawRidePitch = -80.00f;
    this->BlendInTimeFromAntiGrav = 0.60f;
}


