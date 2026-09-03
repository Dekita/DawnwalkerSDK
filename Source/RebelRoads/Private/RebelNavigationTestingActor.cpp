#include "RebelNavigationTestingActor.h"
#include "RebelRoadsPathFindingQueryOwnerWithContext.h"

ARebelNavigationTestingActor::ARebelNavigationTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bCanUseRoads = false;
    this->bCanUseNavMesh = false;
    this->bUseHybridPath = false;
    this->bUseHybridPathSmoothing = false;
    this->bUseNavigationZoneConstraint = false;
    this->PathFindingQueryOwnerWithContext = CreateDefaultSubobject<URebelRoadsPathFindingQueryOwnerWithContext>(TEXT("QueryOwnerWithContext"));
}


