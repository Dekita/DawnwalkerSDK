#include "MeshLootContainer.h"
#include "InventoryComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PersistencyComponent.h"
#include "InteractableComponent.h"

AMeshLootContainer::AMeshLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->PersistencyComponent->SetupAttachment(RootComponent);
}


