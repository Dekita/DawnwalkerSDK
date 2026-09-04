#include "PopulationStats.h"

FPopulationStats::FPopulationStats() {
    this->NumRegisteredStubs = 0;
    this->NumStubsInRange = 0;
    this->NumStubsVisible = 0;
    this->NumStubsForcedVis = 0;
    this->NumSpawnedPawns = 0;
    this->NumSkippablePawns = 0;
    this->NumTickingStubs = 0;
    this->NumReadyToSpawn = 0;
    this->NumBestMovementQualityPawns = 0;
}

