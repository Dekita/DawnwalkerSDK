#include "AnimNotify_SetSlowMotion.h"

UAnimNotify_SetSlowMotion::UAnimNotify_SetSlowMotion() {
    this->SlowMotionDilation = 0.40f;
    this->SlowMotionBlendTime = 0.10f;
    this->bSlowAlsoCameraMovement = true;
    this->bPlayOnlyOnLastOpponent = false;
    this->bCompensateTimeDilationOnPlayer = false;
    this->bPlayOnlyIfAttackTargetIsPlayer = false;
    this->SlowMotionType = EAnimNotifySlowMotionType::Default;
    this->bPlayOnlyIfSlowMotionWhenBlockingIsOnAndUntilAttackOrDodgeIsPressed = false;
}


