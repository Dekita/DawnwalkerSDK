#include "RebelNavigationVoxelExportComponent.h"
#include "NavAreas/NavArea_Null.h"

URebelNavigationVoxelExportComponent::URebelNavigationVoxelExportComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAttachToOwnersRoot = false;
    this->DefaultAreaClass = UNavArea_Null::StaticClass();
    this->CachedRevision = 0;
}


