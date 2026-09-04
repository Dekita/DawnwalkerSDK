#include "RebelRoadsUnifiedNavigationTestCharacter.h"
#include "Engine/EngineTypes.h"
#include "RebelRoadsUnifiedNavigationTestAIController.h"

ARebelRoadsUnifiedNavigationTestCharacter::ARebelRoadsUnifiedNavigationTestCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
    this->AIControllerClass = ARebelRoadsUnifiedNavigationTestAIController::StaticClass();
    this->bEnableRandomWalking = true;
    this->WaypointActorClass = NULL;
    this->NavProfilePreset = ERebelRoadsUnifiedNavigationTestProfile::Unified;
    this->bShouldAvoidUTurns = false;
    this->bUseNavigationZoneConstraint = false;
}


