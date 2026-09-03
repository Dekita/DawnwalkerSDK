#include "HoudiniLandscapeTargetLayerOutput.h"

UHoudiniLandscapeTargetLayerOutput::UHoudiniLandscapeTargetLayerOutput() {
    this->Landscape = NULL;
    this->LandscapeProxy = NULL;
    this->bClearLayer = false;
    this->bCreatedLandscape = false;
    this->bCookedLayerRequiresBaking = false;
    this->MaterialInstance = NULL;
    this->bWriteLockedLayers = false;
    this->bLockLayer = false;
}


