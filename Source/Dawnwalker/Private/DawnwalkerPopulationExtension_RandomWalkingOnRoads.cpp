#include "DawnwalkerPopulationExtension_RandomWalkingOnRoads.h"
#include "DawnwalkerNPCBehavior_RandomWalkingOnRoads.h"
#include "DawnwalkerPopulationExtensionComponent_Behavior.h"
#include "DawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads.h"
#include "DawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads.h"

UDawnwalkerPopulationExtension_RandomWalkingOnRoads::UDawnwalkerPopulationExtension_RandomWalkingOnRoads() {
    this->LoadedBehaviorTree = NULL;
    this->Behavior = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_Behavior>(TEXT("Behavior"));
    this->Trait_AllowUsingRoads = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_Trait_AllowUsingRoads>(TEXT("TraitAlowUsingRoads"));
    this->SpawnLocationProvider_Roads = CreateDefaultSubobject<UDawnwalkerPopulationExtensionComponent_SpawnLocationProvider_Roads>(TEXT("SpawnLocationProviderRoads"));
    this->RuntimeBehavior = CreateDefaultSubobject<UDawnwalkerNPCBehavior_RandomWalkingOnRoads>(TEXT("RuntimeBehavior"));
}


