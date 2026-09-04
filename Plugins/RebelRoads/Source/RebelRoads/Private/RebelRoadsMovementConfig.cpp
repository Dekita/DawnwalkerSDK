#include "RebelRoadsMovementConfig.h"

FRebelRoadsMovementConfig::FRebelRoadsMovementConfig() {
    this->bPersonalSpaceFromCollision = false;
    this->PersonalSpace = 0.00f;
    this->AdditionalPersonalSpace = 0.00f;
    this->AheadDistance = 0.00f;
    this->LookAtAheadDistance = 0.00f;
    this->AheadPointLocationInterpolationSpeed = 0.00f;
    this->LookAtAheadPointLocationInterpolationSpeed = 0.00f;
    this->AgentDetectionRange = 0.00f;
    this->MaxWalkSpeed = 0.00f;
    this->MinStrafingAngle = 0.00f;
    this->StrafingBlendInDelay = 0.00f;
    this->StrafingBlendOutDelay = 0.00f;
}

