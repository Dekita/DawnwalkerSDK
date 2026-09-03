#include "ChildActorLootContainer.h"
#include "InventoryComponent.h"
#include "Components/ChildActorComponent.h"
#include "Components/SceneComponent.h"
#include "PersistencyComponent.h"
#include "InteractableComponent.h"

AChildActorLootContainer::AChildActorLootContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("interaction"));
    this->PersistencyComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
    this->ChildActorComponent = CreateDefaultSubobject<UChildActorComponent>(TEXT("ChildActor"));
    this->ChildActorComponent->SetupAttachment(RootComponent);
    this->InteractableComponent->SetupAttachment(RootComponent);
    this->PersistencyComponent->SetupAttachment(RootComponent);
}


