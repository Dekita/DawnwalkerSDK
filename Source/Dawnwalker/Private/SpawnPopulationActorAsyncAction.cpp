#include "SpawnPopulationActorAsyncAction.h"

USpawnPopulationActorAsyncAction::USpawnPopulationActorAsyncAction() {
    this->Spawner = NULL;
}

USpawnPopulationActorAsyncAction* USpawnPopulationActorAsyncAction::RunAsyncAction(const UObject* WorldContext, TSoftClassPtr<UCommunityNPCDefinitionBase> NPCDefinitionClass, TSoftClassPtr<UAIDefinition> AIDefinitionClass, const FVector& Location, float Rotation) {
    return NULL;
}


