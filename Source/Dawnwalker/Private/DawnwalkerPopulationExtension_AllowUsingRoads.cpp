#include "DawnwalkerPopulationExtension_AllowUsingRoads.h"
#include "DawnwalkerPopulationExtensionComponent_Roads.h"
#include "DawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads.h"
#include "DawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads.h"

UDawnwalkerPopulationExtension_AllowUsingRoads::UDawnwalkerPopulationExtension_AllowUsingRoads() {
    this->Trait_AllowUsingRoads = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads>(TEXT("TraitAlowUsingRoads"));
    this->SpawnLocationProvider_Roads = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads>(TEXT("SpawnLocationProviderRoads"));
    this->Roads = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_Roads>(TEXT("Roads"));
}


