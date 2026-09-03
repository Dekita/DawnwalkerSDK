#include "BiomesPCGWorldSettings.h"

ABiomesPCGWorldSettings::ABiomesPCGWorldSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInitialized = false;
    this->BiomesDataLimit = EBiomesPCGLimit::CreateAll;
}


