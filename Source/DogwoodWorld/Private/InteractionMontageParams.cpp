#include "InteractionMontageParams.h"

FInteractionMontageParams::FInteractionMontageParams() {
    this->bToggleCinematicMode = false;
    this->EnableInputAgainAfterSeconds = 0.00f;
    this->bLockCamera = false;
    this->bUseMotionWarping = false;
    this->bFly = false;
    this->bDisableCollisions = false;
    this->bTurnToTarget = false;
    this->TurnSpeed = 0.00f;
    this->TargetSelf = false;
    this->BlendOutTimeWhenStopping = 0.00f;
}

