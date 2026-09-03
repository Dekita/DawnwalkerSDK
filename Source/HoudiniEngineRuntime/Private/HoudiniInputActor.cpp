#include "HoudiniInputActor.h"

UHoudiniInputActor::UHoudiniInputActor() {
    this->SplinesMeshObjectNodeId = -1;
    this->SplinesMeshNodeId = -1;
    this->LastUpdateNumComponentsAdded = 0;
    this->LastUpdateNumComponentsRemoved = 0;
    this->NumSplineMeshComponents = 0;
    this->GeneratedSplinesMesh = NULL;
    this->bUsedMergeSplinesMeshAtLastTranslate = false;
}


