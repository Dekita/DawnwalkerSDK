#include "DogwoodCharacterAnimInstance_AnimLayer.h"

UDogwoodCharacterAnimInstance_AnimLayer::UDogwoodCharacterAnimInstance_AnimLayer() {
    this->bLeftPoseAllowed = true;
    this->bIsBlocking = false;
    this->bIsInCombat = false;
    this->bLeftPose = false;
    this->bPelvisLeftPose = false;
    this->bWantsRightPose = false;
    this->bSwordSimulationEnabled = false;
    this->GuardBlendInTime = 0.25f;
    this->GuardBlendOutTime = 0.25f;
    this->CombatComponent = NULL;
}


