#include "RebelRoadsMovementParams.h"

FRebelRoadsMovementParams::FRebelRoadsMovementParams() {
    this->MovingSteeringParams_LookAheadTime = 0.00f;
    this->MovingSteeringParams_ReactionTime = 0.00f;
    this->MovementParams_MaxSpeed = 0.00f;
    this->MovementParams_MaxAcceleration = 0.00f;
    this->MovementParams_DefaultDesiredSpeed = 0.00f;
    this->MovementParams_DefaultDesiredSpeedVariance = 0.00f;
    this->MovingAvoidanceParams_StartOfPathAvoidanceScale = 0.00f;
    this->MovingAvoidanceParams_EndOfPathAvoidanceScale = 0.00f;
    this->MovingAvoidanceParams_EndOfPathDuration = 0.00f;
    this->MovingAvoidanceParams_ObstacleSeparationDistance = 0.00f;
    this->MovingAvoidanceParams_ObstacleSeparationStiffness = 0.00f;
    this->MovingAvoidanceParams_StandingObstacleAvoidanceScale = 0.00f;
    this->MovingAvoidanceParams_SeparationRadiusScale = 0.00f;
    this->MovingAvoidanceParams_PredictiveAvoidanceRadiusScale = 0.00f;
    this->MovingAvoidanceParams_PredictiveAvoidanceTime = 0.00f;
    this->MovingAvoidanceParams_PredictiveAvoidanceDistance = 0.00f;
    this->MovingAvoidanceParams_ObstaclePredictiveAvoidanceStiffness = 0.00f;
}

