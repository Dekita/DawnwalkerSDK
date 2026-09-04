#include "PopulationPointProxy.h"
#include "Components/SceneComponent.h"

APopulationPointProxy::APopulationPointProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
}


