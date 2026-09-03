#include "CombatCameraMode.h"

UCombatCameraMode::UCombatCameraMode() {
    this->bEnableCameraFollowDelay = true;
    this->FollowTargetSpeedMultiplier = 2.00f;
    this->bEnableCameraRotationDelay = false;
    this->FollowTargetSpeedMultiplierForRotation = 6.00f;
    this->PlayerToTargetPositionBlend = 0.50f;
    this->NearClipMaxDistance = 40.00f;
    this->ClippingAndPenetrationMaxDistance = 400.00f;
    this->ClippingAndPenetrationMinDistance = 200.00f;
    this->TargetOffsetUp = 30.00f;
    this->VirtualEnemyDistanceWhenNoLockTarget = 300.00f;
    this->MaxAngleInOneSecondForTargetLock = 60.00f;
    this->MaxAngleInOneSecondForTargetSwitch = 60.00f;
    this->TargetingOffsetBlendDistance = 1000.00f;
    this->TargetingOffsetBlendOption = EAlphaBlendOption::Linear;
    this->TargetOffsetBlendMinAlpha = 0.10f;
    this->FlankAttackerMaxLookAtRatio = 0.25f;
    this->FlankAttackerLookAtSpeed = 1.00f;
    this->bEnableDeadZone = false;
    this->DeadZoneFollowSpeed = 1.00f;
    this->FullSpeedXDOTValue = 0.70f;
    this->FullSpeedYDOTValue = 0.90f;
    this->DeadZoneBlendCurve = EAlphaBlendOption::Linear;
    this->DeadZoneCustomBlendCurve = NULL;
    this->bDecreaseDeadZoneWhenClose = true;
    this->CurrentLockTarget = NULL;
    this->CurrentAttacker = NULL;
}


