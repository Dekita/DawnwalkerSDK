#include "LootContainerBase.h"

ALootContainerBase::ALootContainerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bGenerateOverlapEventsDuringLevelStreaming = true;
    this->InteractableComponent = NULL;
    this->PersistencyComponent = NULL;
    this->InventoryComponent = NULL;
    this->bIsStealable = false;
    this->bAllowExtraPoliceSpawning = false;
    this->AudioEventOnOpen = NULL;
    this->bLocked = false;
    this->UnlockItem = NULL;
    this->LoadedNecrospeakVFX = NULL;
    this->SpawnedNecrospeakVFX = NULL;
    this->LoadedQuestItemVFX = NULL;
    this->SpawnedQuestItemVFX = NULL;
}

void ALootContainerBase::OnLootWidgetCreated_Implementation(UDWActivatableWidget* Widget) {
}

void ALootContainerBase::OnInventoryReady() {
}

void ALootContainerBase::OnInventoryContentsChanged() {
}

void ALootContainerBase::OnInteractionTriggered() {
}

void ALootContainerBase::OnEnteredFocus() {
}


