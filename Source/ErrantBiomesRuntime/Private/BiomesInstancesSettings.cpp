#include "BiomesInstancesSettings.h"

FBiomesInstancesSettings::FBiomesInstancesSettings() {
    this->ActorClass = NULL;
    this->ActorTemplate = NULL;
    this->RuntimeSpawningActorClass = NULL;
    this->RuntimeSpawningActorTemplate = NULL;
    this->InstanceComponentTemplate = NULL;
    this->GroupInstances = EBiomesGroupInstances::Always;
    this->MinInstancesInGroup = 0;
    this->InstanceGroupSizeMultiplier = 0;
    this->MaxInstancesPerRuntimeInstanceComponent = 0;
    this->ShadowQuality = ERebelQuality::Never;
    this->RuntimeScalability = EBiomesRuntimeScalability::None;
    this->EnableDensityScaling = false;
    this->RuntimeSpawning = EBiomesRuntimeSpawning::Auto;
    this->bUsesDeprecatedDataLayers = false;
    this->bCastsShadow = false;
    this->bHasPhysics = false;
    this->bEnableDensityScaling = false;
    this->InstanceStartCullDistance = 0;
    this->InstanceEndCullDistance = 0;
    this->MinDrawDistance = 0.00f;
    this->LDMaxDrawDistance = 0.00f;
}

