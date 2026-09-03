#include "RebelSplineMultitoolBase.h"
#include "NavAreas/NavArea_Null.h"
#include "RebelNavigationDataExportComponent_SplineMesh.h"

ARebelSplineMultitoolBase::ARebelSplineMultitoolBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bUseLegacyNavigationSupport = true;
    this->bFillCollisionUnderneathForNavmesh = false;
    this->NavGenerationExtension = NULL;
    this->bCanEverAffectNavigationGeneration = false;
    this->ExtrudeUp = 0.00f;
    this->ExtrudeDown = 0.00f;
    this->ExtrudeAlong = 0.00f;
    this->ExtrudeAside = 0.00f;
    this->SideOffset = 0.00f;
    this->bSplitOnAngleThreshold = false;
    this->AngleThreshold = 30.00f;
    this->bUseZProjection = false;
    this->AreaClass = UNavArea_Null::StaticClass();
    this->SplineMeshExportComponent = CreateDefaultSubobject<URebelNavigationDataExportComponent_SplineMesh>(TEXT("SplineMultitoolExport"));
}

void ARebelSplineMultitoolBase::DrawDebugCachedBoxes() const {
}


