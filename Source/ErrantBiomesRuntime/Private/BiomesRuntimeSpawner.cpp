#include "BiomesRuntimeSpawner.h"
#include "Components/SceneComponent.h"

ADEPRECATED_BiomesRuntimeSpawner::ADEPRECATED_BiomesRuntimeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SpawnPointsGridIndex = 0;
    this->MaxSpawningDistance = 0.00f;
}


