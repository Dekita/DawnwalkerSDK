#include "RebelRoadsSegment.h"
#include "RebelRoadsSegmentRenderingComponent.h"

ARebelRoadsSegment::ARebelRoadsSegment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->bIsEditorOnlyActor = true;
    this->RootComponent = CreateDefaultSubobject<URebelRoadsSegmentRenderingComponent>(TEXT("DrawComponent"));
    this->bNeedsRebuild = true;
    this->LaneProfile = NULL;
    this->DrawComponent = (URebelRoadsSegmentRenderingComponent*)RootComponent;
    this->WayPoint1 = NULL;
    this->WayPoint2 = NULL;
}



