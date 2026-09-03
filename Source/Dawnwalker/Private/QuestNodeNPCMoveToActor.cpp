#include "QuestNodeNPCMoveToActor.h"

UQuestNodeNPCMoveToActor::UQuestNodeNPCMoveToActor() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->bShouldTrackPosition = false;
    this->bShouldFollowTarget = false;
    this->bUseFastActionPointExitMode = true;
    this->MovementSpeedMultiplier = 1.00f;
    this->MovementProfile = NULL;
    this->TeleportToPlayerInterval = 1.00f;
    this->PlayerTooFarDistance = 2000.00f;
}


