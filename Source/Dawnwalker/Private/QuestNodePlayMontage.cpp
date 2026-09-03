#include "QuestNodePlayMontage.h"

UQuestNodePlayMontage::UQuestNodePlayMontage() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(3);
    this->bToggleCinematicMode = false;
    this->EnableInputAgainAfterSeconds = 0.00f;
    this->bLockCamera = false;
    this->bUseMotionWarping = false;
    this->bFly = false;
    this->bDisableCollisions = false;
    this->bTurnToTarget = false;
    this->TurnSpeed = 1.00f;
    this->BlendOutTimeWhenStopping = 0.20f;
    this->bShouldBlockCommunityBehaviour = false;
}


