#include "RebelCrowdController.h"
#include "RebelCrowdPathFindingQueryOwnerWithContext.h"

URebelCrowdController::URebelCrowdController() {
    this->World = NULL;
    this->CommunitySystemInterface = NULL;
    this->ActorStubSystem = NULL;
    this->PopulationSystem = NULL;
    this->VisibilitySubsystem = NULL;
    this->DebugSubsystem = NULL;
    this->AgentsSpatialLayer = NULL;
    this->NavSystem = NULL;
    this->MainPlayerCharacterStub = NULL;
    this->PathFindingQueryOwnerWithContext = CreateDefaultSubobject<URebelCrowdPathFindingQueryOwnerWithContext>(TEXT("CrowdPathFindingQueryOwnerWithContext"));
}


