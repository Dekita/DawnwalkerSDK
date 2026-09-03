#include "DashConfig.h"

FDashConfig::FDashConfig() {
    this->bDontFollowPlayerCameraDuringDash = false;
    this->bDisablePlayerRotationTowardsCharacter = false;
    this->ExtraDelayBeforeReenablingPlayerRotation = 0.00f;
    this->bKeepOrientationToTarget = false;
}

