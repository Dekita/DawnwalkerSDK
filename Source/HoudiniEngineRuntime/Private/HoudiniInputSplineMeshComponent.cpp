#include "HoudiniInputSplineMeshComponent.h"

UHoudiniInputSplineMeshComponent::UHoudiniInputSplineMeshComponent() {
    this->GeneratedMesh = NULL;
    this->CachedForwardAxis = ESplineMeshAxis::X;
    this->CachedSplineBoundaryMax = 0.00f;
    this->CachedSplineBoundaryMin = 0.00f;
    this->CachedbSmoothInterpRollScale = false;
}


