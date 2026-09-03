#include "RebelAIBoardFragment_Leader.h"

FRebelAIBoardFragment_Leader::FRebelAIBoardFragment_Leader() {
    this->bLeaderModeEnabled = false;
    this->LeaderSpeed = ERebelAIFollowerSpeed::Walk;
    this->TargetSpline = NULL;
    this->bMoveBackward = false;
    this->PlayerDetectionRadius = 0.00f;
    this->LeaderStopRadius = 0.00f;
    this->CurrentDistanceToPlayer = 0.00f;
    this->PlayerToFarEventRadius = 0.00f;
    this->bWaitForPlayer = false;
    this->bOverrideSpeed = false;
    this->OverridenSpeed = ERebelAIFollowerSpeed::Walk;
    this->bLoopSpline = false;
    this->MovementProfileHandle = 0;
    this->bHasCustomMovementProfile = false;
    this->CurrentSplinePosition = 0.00f;
    this->bIgnoreNavmeshAndNavlinksWhenOnSpline = false;
    this->TargetRefreshRate = 0.00f;
    this->WantToChangeSpeedTime = 0.00f;
    this->WaitStartTime = 0.00f;
    this->TimeToTurnToPlayer = 0.00f;
    this->WithoutNavmeshStartTime = 0.00f;
    this->bPlayerIsMoving = false;
    this->PlayerLastMoveTime = 0.00f;
    this->LastNavLinkUseTime = 0.00f;
    this->LastTurnTime = 0.00f;
}

