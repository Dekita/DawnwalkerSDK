#include "HoudiniInputObject.h"

UHoudiniInputObject::UHoudiniInputObject() {
    this->Type = EHoudiniInputObjectType::Invalid;
    this->bHasChanged = false;
    this->bNeedsToTriggerUpdate = false;
    this->bTransformChanged = false;
    this->bCanDeleteHoudiniNodes = true;
    this->bInputNodeHandleOverridesNodeIds = true;
    this->InputNodeId = -1;
    this->InputObjectNodeId = -1;
}


