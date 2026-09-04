#include "RebelRoadsMoveTargetConfig.h"

FRebelRoadsMoveTargetConfig::FRebelRoadsMoveTargetConfig() {
    this->bUseMoveTargets = false;
    this->bWaitForFollower = false;
    this->bTeleportFollower = false;
    this->bDisableCharacterSimulation = false;
    this->MaxDistance = 0.00f;
    this->ResumeDistance = 0.00f;
    this->Radius = 0.00f;
    this->TotalSpeedMin = 0.00f;
    this->PreferredSpeedMin = 0.00f;
    this->PreferredSpeedMax = 0.00f;
    this->PreferredFastSpeedMin = 0.00f;
    this->PreferredFastSpeedMax = 0.00f;
    this->SideDevianceScale = 0.00f;
    this->bCollisionControl = false;
    this->MoveTargetDetectionRange = 0.00f;
    this->SeparationDistance = 0.00f;
    this->SeparationDistanceDeviance = 0.00f;
    this->MinSeparationDistance = 0.00f;
    this->bCrossingControl = false;
    this->CrossingRange = 0.00f;
    this->MaxTickets = 0;
}

