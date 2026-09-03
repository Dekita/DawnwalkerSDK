#include "BiomesRuntimeSpawnerContainer.h"
#include "Components/SceneComponent.h"

ABiomesRuntimeSpawnerContainer::ABiomesRuntimeSpawnerContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
}


