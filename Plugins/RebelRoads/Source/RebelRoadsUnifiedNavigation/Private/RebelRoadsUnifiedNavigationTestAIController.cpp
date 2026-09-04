#include "RebelRoadsUnifiedNavigationTestAIController.h"
#include "RebelRoadsUnifiedPathFollowingComponent.h"

ARebelRoadsUnifiedNavigationTestAIController::ARebelRoadsUnifiedNavigationTestAIController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<URebelRoadsUnifiedPathFollowingComponent>(TEXT("PathFollowingComponent"))) {
    FProperty* p_PathFollowingComponent_Prior = GetClass()->FindPropertyByName("PathFollowingComponent");
    this->UnifiedPathFollowingComponent = (URebelRoadsUnifiedPathFollowingComponent*)*p_PathFollowingComponent_Prior->ContainerPtrToValuePtr<URebelRoadsUnifiedPathFollowingComponent*>(this);
    this->WalkerCharacter = NULL;
    this->CurrentWaypointTarget = NULL;
    this->LastVisitedWaypoint = NULL;
}


