#include "EiiWorldSubsystem.h"
#include "Templates/SubclassOf.h"

UEiiWorldSubsystem::UEiiWorldSubsystem() {
}

bool UEiiWorldSubsystem::WasInstancedComponentInteractedWith(const UInstancedStaticMeshComponent* InstancedComp) const {
    return false;
}

void UEiiWorldSubsystem::UnregisterInstancedComponent(UInstancedStaticMeshComponent* InstancedComp) {
}

bool UEiiWorldSubsystem::RestoreHitActorToInstance(const FHitResult& HitRes) {
    return false;
}

bool UEiiWorldSubsystem::RestoreActorToInstance(AActor* Actor) {
    return false;
}

void UEiiWorldSubsystem::RegisterInstancedComponent(UInstancedStaticMeshComponent* InstancedComp, const TSubclassOf<AActor> DefaultActorClassToConvertTo, const UEiiMeshToActorMapping* MeshToActorClassMapping) {
}

AActor* UEiiWorldSubsystem::ConvertInstanceToActor(UInstancedStaticMeshComponent* InstancedComp, int32 InstanceIdx, UClass* ClassOverride) {
    return NULL;
}

AActor* UEiiWorldSubsystem::ConvertHitInstanceToActor(const FHitResult& HitRes) {
    return NULL;
}


