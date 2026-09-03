#include "LootBagContainer.h"
#include "InventoryComponent_Proxy.h"
#include "Components/StaticMeshComponent.h"
#include "InteractableComponent.h"

ALootBagContainer::ALootBagContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent_Proxy>(TEXT("Inventory_Proxy"));
    this->StaticMeshComponent = (UStaticMeshComponent*)RootComponent;
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void ALootBagContainer::OnLootBagContentsChanged() {
}


