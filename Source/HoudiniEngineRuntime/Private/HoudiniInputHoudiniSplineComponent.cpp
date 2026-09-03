#include "HoudiniInputHoudiniSplineComponent.h"

UHoudiniInputHoudiniSplineComponent::UHoudiniInputHoudiniSplineComponent() {
    this->bInputNodeHandleOverridesNodeIds = false;
    this->CurveType = EHoudiniCurveType::Polygon;
    this->CurveMethod = EHoudiniCurveMethod::CVs;
    this->Reversed = false;
    this->CachedComponent = NULL;
}


