#include "RebelPooledNavModifierObstacleComponent.h"
#include "NavAreas/NavArea_Obstacle.h"

URebelPooledNavModifierObstacleComponent::URebelPooledNavModifierObstacleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Obstacle::StaticClass();
}


