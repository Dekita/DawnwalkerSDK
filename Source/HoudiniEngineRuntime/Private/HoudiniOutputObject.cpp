#include "HoudiniOutputObject.h"

FHoudiniOutputObject::FHoudiniOutputObject() {
    this->OutputObject = NULL;
    this->ProxyObject = NULL;
    this->ProxyComponent = NULL;
    this->bProxyIsCurrent = false;
    this->bIsImplicit = false;
    this->bIsInvisibleCollisionMesh = false;
    this->bIsGeometryCollectionPiece = false;
    this->UserFoliageType = NULL;
    this->FoliageType = NULL;
    this->World = NULL;
}

