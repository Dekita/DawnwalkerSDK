#include "EffectCameraMode.h"

UEffectCameraMode::UEffectCameraMode() {
    this->bTakeRotationToAttackTarget = true;
    this->bFocusOnAttackTarget = true;
    this->bEnableCameraFollowDelay = true;
    this->FollowTargetSpeedMultiplier = 6.00f;
    this->bTakePlayerRotationOnlyAtStart = false;
    this->bTakeLocationFromAttackTarget = false;
    this->bOverrideControllerRotation = false;
    this->bUseSecondStage = false;
    this->SecondStageDelay = 0.00f;
    this->bUseThirdStage = false;
    this->ThirdStageDelay = 0.00f;
    this->NearClipDistance = 60.00f;
}


