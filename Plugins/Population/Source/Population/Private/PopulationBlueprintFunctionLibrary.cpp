#include "PopulationBlueprintFunctionLibrary.h"

UPopulationBlueprintFunctionLibrary::UPopulationBlueprintFunctionLibrary() {
}

bool UPopulationBlueprintFunctionLibrary::IsStubVisible(const UObject* WorldContextObject, const UActorStub* ActorStub) {
    return false;
}

bool UPopulationBlueprintFunctionLibrary::IsInPostponedSpawnRevealState(const AActor* Actor) {
    return false;
}

bool UPopulationBlueprintFunctionLibrary::IsComponentOwnerInPostponedSpawnRevealState(const UActorComponent* ActorComponent) {
    return false;
}


