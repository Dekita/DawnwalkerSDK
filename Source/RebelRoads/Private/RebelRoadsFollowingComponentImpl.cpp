#include "RebelRoadsFollowingComponentImpl.h"
#include "RebelRoadsPathFindingQueryOwnerWithContext.h"

URebelRoadsFollowingComponentImpl::URebelRoadsFollowingComponentImpl(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PathFindingQueryOwnerWithContext = CreateDefaultSubobject<URebelRoadsPathFindingQueryOwnerWithContext>(TEXT("QueryOwnerWithContext"));
    this->MoveTargetSubsystem = NULL;
    this->RoadsSubsystem = NULL;
    this->Config = NULL;
}


