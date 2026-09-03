#include "RebelCameraModeTPP.h"

URebelCameraModeTPP::URebelCameraModeTPP() {
    this->UpVectorBlendSharpness = 5.00f;
    this->bOverrideCrouchingDefaults = false;
    this->bOverrideCollisionDefaults = false;
    this->bEnablePawnCollision = false;
    this->bDisablePenetrationPrevention = false;
    this->bEnableClippingForPawns = false;
    this->ClippingDistance = 75.00f;
    this->ClippingBlendSpeed = 3.00f;
    this->AimLineToDesiredPosBlockedAlpha = 0.00f;
}


