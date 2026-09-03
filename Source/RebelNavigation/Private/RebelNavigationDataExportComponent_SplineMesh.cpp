#include "RebelNavigationDataExportComponent_SplineMesh.h"
#include "NavAreas/NavArea_Null.h"

URebelNavigationDataExportComponent_SplineMesh::URebelNavigationDataExportComponent_SplineMesh(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AreaClass = UNavArea_Null::StaticClass();
    this->bHasProjectAverageWorldZ = false;
    this->ProjectAverageWorldZ = 0.00f;
}

void URebelNavigationDataExportComponent_SplineMesh::UpdateCacheFromOwner() {
}

void URebelNavigationDataExportComponent_SplineMesh::DrawDebugCachedBoxes(float LifeTimeSeconds) {
}


