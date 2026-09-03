#include "FloatingLootContainer.h"
#include "InventoryComponent.h"
#include "PersistencyComponent.h"
#include "InteractableComponent.h"

AFloatingLootContainer::AFloatingLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->InteractableComponent = (UInteractableComponent*)RootComponent;
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    this->PersistencyComponent->SetupAttachment(RootComponent);
}

void AFloatingLootContainer::OnTargetHighlightEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> Reason) {
}


