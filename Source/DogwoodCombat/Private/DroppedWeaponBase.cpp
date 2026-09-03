#include "DroppedWeaponBase.h"
#include "Components/StaticMeshComponent.h"

ADroppedWeaponBase::ADroppedWeaponBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
}

void ADroppedWeaponBase::OnOwnerDestroyed(AActor* DestroyedActor) {
}


