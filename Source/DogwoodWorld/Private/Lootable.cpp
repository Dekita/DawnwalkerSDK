#include "Lootable.h"
#include "Components/StaticMeshComponent.h"
#include "PersistencyComponent.h"
#include "LootableComponent.h"

ALootable::ALootable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PersistentMesh"));
    this->PersistentMesh = (UStaticMeshComponent*)RootComponent;
    this->HideableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HideableMesh"));
    this->LootableComponent = CreateDefaultSubobject<ULootableComponent>(TEXT("Lootable"));
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->HideableMesh->SetupAttachment(RootComponent);
    this->LootableComponent->SetupAttachment(RootComponent);
    this->PersistencyComponent->SetupAttachment(RootComponent);
}

void ALootable::OnLootableRegenerated_Implementation() {
}

void ALootable::OnLootablePickedUp_Implementation() {
}


