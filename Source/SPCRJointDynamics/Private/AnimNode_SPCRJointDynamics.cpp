#include "AnimNode_SPCRJointDynamics.h"

FAnimNode_SPCRJointDynamics::FAnimNode_SPCRJointDynamics() {
    this->VirtualBoneLength = 0.00f;
    this->FixedPointIndex = 0;
    this->Structural_Vertical_StepCount = 0;
    this->bJointLoop = false;
    this->bStructural_Vertical = false;
    this->bStructural_Vertical_Collision = false;
    this->bStructural_Horizontal = false;
    this->bStructural_Horizontal_Collision = false;
    this->bShear = false;
    this->bShear_Collision = false;
    this->bBending_Vertical = false;
    this->bBending_Horizontal = false;
    this->MaxIterations = 0;
    this->CollisionSubInterations = 0;
    this->CollisionLOD = 0;
    this->bForceLengthLimit = false;
    this->bUseDrag = false;
    this->DragCoefficient = 0.00f;
    this->bUseLift = false;
    this->LiftCoefficient = 0.00f;
    this->WindForceSpeed = 0.00f;
    this->bUseSurfaceCollision = false;
    this->WriteID = 0;
    this->jointDynamicsComponent = NULL;
    this->bLimitAngle = false;
    this->AngleLimitInDegree = 0.00f;
    this->bLimitFromRoot = false;
    this->bDebugDrawConstraints = false;
    this->bDebugDrawColliders = false;
    this->bDebugDrawSurfaceCollision = false;
}

