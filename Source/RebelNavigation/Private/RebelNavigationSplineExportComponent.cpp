#include "RebelNavigationSplineExportComponent.h"
#include "NavAreas/NavArea_Null.h"

URebelNavigationSplineExportComponent::URebelNavigationSplineExportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->CachedExtrudeTop = 0.00f;
    this->CachedExtrudeBottom = 0.00f;
    this->bCachedIsFilled = false;
    this->CachedAreaClass = UNavArea_Null::StaticClass();
    this->CachedAreaClassToReplace = NULL;
}


