#include "BiomesRuntimeSpawnerComponent.h"

UBiomesRuntimeSpawnerComponent::UBiomesRuntimeSpawnerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MaxSpawningDistanceSquared = 0.00f;
    this->SpeciesInfo = NULL;
    this->SpawnPointsGridIndex = 0;
    this->MaxSpawningDistance = 0.00f;
}


