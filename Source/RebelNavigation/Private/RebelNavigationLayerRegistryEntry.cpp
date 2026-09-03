#include "RebelNavigationLayerRegistryEntry.h"

FRebelNavigationLayerRegistryEntry::FRebelNavigationLayerRegistryEntry() {
    this->Role = ERebelNavigationLayerRole::AreaOverride;
    this->AreaClassOverride = NULL;
    this->bCanEverAffectNavigation = false;
    this->bImmutable = false;
    this->bSyncWithDataLayer = false;
    this->bInitiallyEnabledInRuntime = false;
    this->bEnabledInEditor = false;
    this->bVisibleInEditor = false;
}

