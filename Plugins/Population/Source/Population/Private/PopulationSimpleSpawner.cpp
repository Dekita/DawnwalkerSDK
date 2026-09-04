#include "PopulationSimpleSpawner.h"

APopulationSimpleSpawner::APopulationSimpleSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->GeneratedDataTable = NULL;
    this->SpawnActivator = NULL;
    this->DespawnActivator = NULL;
}

void APopulationSimpleSpawner::Stop() {
}


