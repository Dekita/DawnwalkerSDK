#include "RebelRoadsGraph.h"
#include "RebelRoadsGraphRenderingComponent.h"

ARebelRoadsGraph::ARebelRoadsGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableAutoLODGeneration = false;
    this->RootComponent = CreateDefaultSubobject<URebelRoadsGraphRenderingComponent>(TEXT("GraphRenderingComponent"));
    this->bDrawNodes = true;
    this->bDrawSegments = true;
    this->bDrawLanes = true;
    this->bDrawCrossings = true;
    this->bDrawSegmentConvexes = false;
    this->bDrawQuadTree = false;
    this->DrawQuadTreeOffset = 0.00f;
    this->GraphRenderingComponent = (URebelRoadsGraphRenderingComponent*)RootComponent;
    this->DrawOffset = 0.00f;
    this->QuadTreeCapacity = 8;
    this->QuadTreeMaxDepth = 12;
    this->RuntimeGridName = TEXT("NavMesh");
    this->NavChunkSize = 5168.00f;
    this->TotalNodes = 0;
    this->TotalSegments = 0;
    this->QuadTreeTotalNodes = 0;
    this->QuadTreeTotalSegments = 0;
    this->QuadTreeTotalMemory = 0;
    this->TotalMemory = 0;
}


