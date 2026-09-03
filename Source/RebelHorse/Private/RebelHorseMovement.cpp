#include "RebelHorseMovement.h"

URebelHorseMovement::URebelHorseMovement(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseSeparateBrakingFriction = true;
    this->HorseMovementConfig = NULL;
    this->ForwardInput = 0.00f;
    this->RequestedTurnAngle = 0.00f;
    this->CurrentTurnRadius = 0.00f;
    this->CurrentAngularSpeed = 0.00f;
}


