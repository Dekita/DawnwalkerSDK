#include "RebelNavigationSpline.h"
#include "NavAreas/NavArea_Null.h"
#include "RebelNavigationSplineComponent.h"
#include "RebelNavigationSplineExportComponent.h"

ARebelNavigationSpline::ARebelNavigationSpline(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<URebelNavigationSplineComponent>(TEXT("Spline"));
    this->bCanEverAffectNavigationGeneration = true;
    this->ShapeMode = ERebelNavigationSplineShapeMode::Filled;
    this->bUsePerSegmentExtrudeOverride = false;
    this->ExtrudeTop = 10.00f;
    this->ExtrudeBottom = 10.00f;
    this->ExtrudePadding = 0.00f;
    this->AreaClass = UNavArea_Null::StaticClass();
    this->AreaClassToReplace = NULL;
    this->SplineComponent = (USplineComponent*)RootComponent;
    this->SplineExportComponent = CreateDefaultSubobject<URebelNavigationSplineExportComponent>(TEXT("SplineExport"));
}


