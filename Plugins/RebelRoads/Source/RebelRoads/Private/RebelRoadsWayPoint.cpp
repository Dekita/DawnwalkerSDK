#include "RebelRoadsWayPoint.h"
#include "RebelRoadsWayPointRenderingComponent.h"

ARebelRoadsWayPoint::ARebelRoadsWayPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<URebelRoadsWayPointRenderingComponent>(TEXT("DrawComponent"));
    this->bNeedsRebuild = true;
    this->CrossingProfile = NULL;
    this->DrawComponent = (URebelRoadsWayPointRenderingComponent*)RootComponent;
}



