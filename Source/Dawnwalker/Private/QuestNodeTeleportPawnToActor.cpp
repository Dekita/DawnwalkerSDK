#include "QuestNodeTeleportPawnToActor.h"

UQuestNodeTeleportPawnToActor::UQuestNodeTeleportPawnToActor() {
    this->Inputs.AddDefaulted(1);
    this->Outputs.AddDefaulted(1);
    this->bDefineOffsetDistanceOrRotation = false;
    this->OffsetDistance = 0.00f;
    this->OffsetRotation = 0.00f;
}


