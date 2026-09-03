#include "ActionPointObstacleComponent.h"

UActionPointObstacleComponent::UActionPointObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mobility = EComponentMobility::Stationary;
    this->ShapeBodySetup = NULL;
    this->bDynamicObstacle = true;
}


