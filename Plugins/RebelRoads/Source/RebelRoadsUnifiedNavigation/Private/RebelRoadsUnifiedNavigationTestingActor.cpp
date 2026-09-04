#include "RebelRoadsUnifiedNavigationTestingActor.h"

ARebelRoadsUnifiedNavigationTestingActor::ARebelRoadsUnifiedNavigationTestingActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bDrawPath = true;
    this->bDrawUnifiedBiasedNavPath = true;
    this->bDrawUnifiedHybridPath = true;
    this->bDrawUnifiedTransitions = true;
    this->NavProfilePreset = ERebelRoadsUnifiedNavigationTestingActorProfile::Unified;
    this->bHasRoadGraphData = true;
    this->bHasNavMeshData = true;
    this->bShouldAvoidUTurns = false;
    this->bUseNavigationZoneConstraint = false;
}


