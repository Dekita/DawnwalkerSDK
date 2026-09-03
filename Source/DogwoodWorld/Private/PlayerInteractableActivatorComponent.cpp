#include "PlayerInteractableActivatorComponent.h"

UPlayerInteractableActivatorComponent::UPlayerInteractableActivatorComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OwnerAbilitySystemComponent = NULL;
    this->TargetedInteractable = NULL;
    this->FocusDetectorsLayer = NULL;
}

void UPlayerInteractableActivatorComponent::StartInteractionWithTarget() {
}

void UPlayerInteractableActivatorComponent::SetInFocusMode(bool State) {
}

void UPlayerInteractableActivatorComponent::OnIsInCombatTagChanged(FGameplayTag GameplayTag, int32 Number) {
}

void UPlayerInteractableActivatorComponent::OnFastTravelStarted() {
}

void UPlayerInteractableActivatorComponent::OnFastTravelled() {
}

UInteractableComponent* UPlayerInteractableActivatorComponent::GetTargetedInteractable() const {
    return NULL;
}

void UPlayerInteractableActivatorComponent::EndInteractionWithTarget() {
}


