#include "PopulationExtensionConfig_AllowUsingRoads.h"

FPopulationExtensionConfig_AllowUsingRoads::FPopulationExtensionConfig_AllowUsingRoads() {
    this->Mode = ERebelRoadsUseMode::Enable;
    this->SpawnDistributionScope = EPopulationSpawnDistributionScope::Default;
}

