#include "QuestNodePlayLevelSequence.h"

UQuestNodePlayLevelSequence::UQuestNodePlayLevelSequence() {
    this->Inputs.AddDefaulted(2);
    this->Outputs.AddDefaulted(2);
    this->bPerformFadeOutOnStart = false;
    this->StartFadeOutTime = 1.00f;
    this->bPerformFadeInOnStart = false;
    this->StartFadeInTime = 1.00f;
    this->bPerformFadeOutOnEnd = false;
    this->EndFadeOutTime = 1.00f;
    this->bPerformFadeInOnEnd = false;
    this->EndFadeInTime = 1.00f;
    this->ToggleCinematicMode = false;
    this->bHidePlayer = false;
    this->bTurnOffPlayerCollisions = true;
    this->bLockCamera = true;
    this->bAutoBindActorsByTag = true;
    this->bKeepActorTransforms = false;
    this->PlayRate = 1.00f;
}


