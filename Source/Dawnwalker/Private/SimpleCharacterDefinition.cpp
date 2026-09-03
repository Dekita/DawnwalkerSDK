#include "SimpleCharacterDefinition.h"

USimpleCharacterDefinition::USimpleCharacterDefinition() {
    this->CapsuleHalfHeight = 0.00f;
    this->CapsuleRadius = 0.00f;
    this->bCanCharacterStepUpOn = false;
    this->bCollisionIgnorePawn = false;
    this->RunAwayQuery = NULL;
    this->RunAwayQueryFallback = NULL;
    this->ScareMinTime = 5.00f;
    this->ScareDistance = 2000.00f;
    this->MovementGoalTolerance = 5.00f;
    this->bShouldRunAwayFromNPCs = false;
    this->bShouldRunAwayOnlyFromAggressivePlayer = false;
    this->bTreatBumpingAsAggression = false;
    this->DefaultMovementProfile = NULL;
    this->RunAwayMovementProfile = NULL;
    this->DefaultAnimLayer = NULL;
    this->LootTable = NULL;
}


