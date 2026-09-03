#include "DawnwalkerAIControllerBase.h"
#include "EventBusComponent.h"
#include "RebelRoadsFollowingComponent.h"
#include "DawnwalkerNPCBehaviorComponent.h"

ADawnwalkerAIControllerBase::ADawnwalkerAIControllerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EventBusComp = CreateDefaultSubobject<UEventBusComponent>(TEXT("EventBus"));
    this->MovementTargetActorBBKey = TEXT("MovementTargetActor");
    this->ShouldFollowTargetBBKey = TEXT("ShouldFollowTarget");
    this->ShouldTrackTargetBBKey = TEXT("ShouldTrackTarget");
    this->SplinePathBBKey = TEXT("SplinePath");
    this->MoveBackwardsBBKey = TEXT("MoveBackwards");
    this->PlayerLostDistanceBBKey = TEXT("PlayerLostDistance");
    this->EscapeTargetActorBBKey = TEXT("EscapeTargetActor");
    this->EscapeWaypointTagBBKey = TEXT("EscapeWaypointTag");
    this->EscapeReactionDistanceBBKey = TEXT("EscapeReactionDistance");
    this->EscapeWaypointLocationBBKey = TEXT("EscapeWaypointLocation");
    this->LastEscapeWaypointLocationBBKey = TEXT("LastEscapeWaypointLocation");
    this->NPCBehaviorComponent = CreateDefaultSubobject<UDawnwalkerNPCBehaviorComponent>(TEXT("Population Extension Behavior Execution Component"));
    this->RoadsMovementProfile = NULL;
    this->RebelRoadsFollowingComponent = CreateDefaultSubobject<URebelRoadsFollowingComponent>(TEXT("Roads Following Component"));
}

void ADawnwalkerAIControllerBase::MoveWithCallbackEnded_Implementation(EPathFollowingResult::Type Result) {
}

UEventBusComponent* ADawnwalkerAIControllerBase::GetEventBus() {
    return NULL;
}

void ADawnwalkerAIControllerBase::CallPlayerWanderedOff_Implementation() {
}

void ADawnwalkerAIControllerBase::BP_SetCanEverUseRoads(bool bEnable) {
}

void ADawnwalkerAIControllerBase::AIStopMovingAlongSpline() {
}

void ADawnwalkerAIControllerBase::AIStopFollowing() {
}

void ADawnwalkerAIControllerBase::AIStopEscapeFromActor() {
}

void ADawnwalkerAIControllerBase::AIStartEscapeFromActor(AActor* TargetActor, const FName& WaypointTag, float ReactionDistance, const bool bUseFastOut) {
}

void ADawnwalkerAIControllerBase::AIMoveToActor(AActor* TargetActor, const bool bShouldFollowTarget, const bool bShouldTrackPosition, const bool bUseFastOut) {
}

void ADawnwalkerAIControllerBase::AIMoveAlongSpline(AQuestSplinePath* TargetSpline, const float PlayerLostDistance, const bool bMoveBackwards, const bool bUseFastOut) {
}


