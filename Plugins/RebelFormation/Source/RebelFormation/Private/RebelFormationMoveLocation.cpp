#include "RebelFormationMoveLocation.h"
#include "Components/SceneComponent.h"

ARebelFormationMoveLocation::ARebelFormationMoveLocation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}


