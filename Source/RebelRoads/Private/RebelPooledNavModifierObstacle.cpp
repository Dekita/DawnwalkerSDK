#include "RebelPooledNavModifierObstacle.h"
#include "Components/SceneComponent.h"
#include "RebelPooledNavModifierObstacleComponent.h"

ARebelPooledNavModifierObstacle::ARebelPooledNavModifierObstacle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
    this->NavModifierComponent = CreateDefaultSubobject<URebelPooledNavModifierObstacleComponent>(TEXT("RebelNavModifierObstacleComponent"));
}


