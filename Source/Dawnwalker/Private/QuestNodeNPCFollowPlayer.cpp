#include "QuestNodeNPCFollowPlayer.h"

UQuestNodeNPCFollowPlayer::UQuestNodeNPCFollowPlayer() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(7);
    this->KeepDistanceToPlayer = 300.00f;
    this->TeleportDistance = 3000.00f;
    this->ReturnToAPDistance = 1000.00f;
    this->bUseFastActionPointExitMode = true;
}


