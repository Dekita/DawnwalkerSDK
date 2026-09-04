#include "RebelFormationGroup_PawnData.h"

URebelFormationGroup_PawnData::URebelFormationGroup_PawnData() {
    this->PawnPtr = NULL;
    this->PositionIndex = -1;
    this->MovingHelper = NULL;
    this->Type = 0;
    this->PawnState = ERebelFormationPawnState::NotExisting;
    this->OverridenReactionProfile = NULL;
    this->Spawner = NULL;
    this->MovementProfile = NULL;
}


