#include "QuestNodeNPCStartEscapeFromActor.h"

UQuestNodeNPCStartEscapeFromActor::UQuestNodeNPCStartEscapeFromActor() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(2);
    this->ReactionDistance = 500.00f;
    this->MovementSpeedMultiplier = 1.00f;
    this->MovementProfile = NULL;
    this->bUseFastActionPointExitMode = true;
}


