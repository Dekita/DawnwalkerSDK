#include "RebelAIBoardFragment_Follower.h"

FRebelAIBoardFragment_Follower::FRebelAIBoardFragment_Follower() {
    this->bFollowerModeEnabled = false;
    this->KeepDistanceToPlayer = 0.00f;
    this->KeepDistanceToPlayerMoveTo = 0.00f;
    this->TeleportDistance = 0.00f;
    this->ReturnToAPDistance = 0.00f;
    this->bIsPlayerInFollowArea = false;
    this->bIsCrouchingToPlayer = false;
    this->PathToPlayerNotExist = 0;
    this->FollowerSpeed = ERebelAIFollowerSpeed::Walk;
    this->bReturnToAP = false;
    this->bIsTemporaryFollower = false;
}

