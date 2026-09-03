#include "QuestNodeNPCFollowSpline.h"

UQuestNodeNPCFollowSpline::UQuestNodeNPCFollowSpline() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(3);
    this->bWaitForPlayer = true;
    this->PlayerWanderOffRadius = 500.00f;
    this->LeaderStopOffset = 100.00f;
    this->PlayerToFarEventRadius = 1000.00f;
    this->TimeToTurnToPlayer = 0.00f;
    this->bMoveBackwards = false;
    this->bLoopMovementOnSpline = false;
    this->bShouldForceSpeed = false;
    this->ForceSpeed = ERebelAIFollowerSpeed::Run;
    this->OverrideMovementProfile = NULL;
    this->bIgnoreNavmeshAndNavlinksWhenOnSpline = false;
    this->bUseFastActionPointExitMode = true;
}


