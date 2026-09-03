#include "QuestStorage.h"
#include "PersistencyComponent.h"
#include "InventoryComponent.h"

AQuestStorage::AQuestStorage(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bRelevantForLevelBounds = false;
    this->RootComponent = CreateDefaultSubobject<UPersistencyComponent>(TEXT("Persistency"));
    this->PersistencyComponent = (UPersistencyComponent*)RootComponent;
    this->InventoryComponent = CreateDefaultSubobject<UInventoryComponent>(TEXT("Inventory"));
}


