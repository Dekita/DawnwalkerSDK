#include "SpecialStorageReference.h"
#include "PersistencyComponent.h"
#include "InventoryComponent.h"

ASpecialStorageReference::ASpecialStorageReference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->Type = ESpecialInventoryType::None;
    this->PersistencyComponent = (UPersistencyComponent*)RootComponent;
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
}


