#include "InteractableComponent.h"

UInteractableComponent::UInteractableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->InteractableType = EInteractableType::Default;
    this->InteractionRange = EInteractionRange::Medium;
    this->InteractableState = EInteractableState::Interactable;
    this->DeferredInteractableState = EInteractableState::None;
    this->bUseActorLocationForPrompt = false;
    this->MeshDot = -1.00f;
    this->QuestInteractionCounter = 0;
    this->DisplayedTimeSegmentCost = 0;
    this->DisplayedTimeSegmentIsLater = false;
    this->InternalQuestNodeCounter = 0;
    this->bPlayInteractionMontage = false;
    this->bStartInteractionWhenMontageEnds = false;
    this->InteractionStartDelay = 0.00f;
    this->CachedPreQuestInteractionState = EInteractableState::Disabled;
    this->bEnabledFromQuest = false;
    this->bQuestRequiresImportantHighlight = true;
    this->InteractionMontage = NULL;
}

void UInteractableComponent::StartInteraction() {
}

void UInteractableComponent::StartAbilityInteraction() {
}

bool UInteractableComponent::ShouldShowPrompt() const {
    return false;
}

void UInteractableComponent::SetTargeted(bool bInIsTargeted) {
}

void UInteractableComponent::SetState(EInteractableState State, bool bForce) {
}

void UInteractableComponent::ResetQuestInteractionCounter() {
}

void UInteractableComponent::NotifyInteractableUpdated() {
}

bool UInteractableComponent::IsTargeted() const {
    return false;
}

bool UInteractableComponent::IsQuestInteractable() const {
    return false;
}

bool UInteractableComponent::IsQuestImportantInteractable_Implementation() const {
    return false;
}

bool UInteractableComponent::IsInteractionEnabled() const {
    return false;
}

bool UInteractableComponent::IsHighlightEnabled() const {
    return false;
}

bool UInteractableComponent::IsEnabledFromQuest() const {
    return false;
}

void UInteractableComponent::InteractionTriggered() {
}

FVector UInteractableComponent::GetPromptLocation() const {
    return FVector{};
}

FText UInteractableComponent::GetPrompt() const {
    return FText::GetEmpty();
}

EInteractableState UInteractableComponent::GetInteractionState_Implementation() const {
    return EInteractableState::None;
}

EInteractionRiskType UInteractableComponent::GetInteractionRiskType_Implementation() const {
    return EInteractionRiskType::None;
}

EInteractionRange UInteractableComponent::GetInteractionRange_Implementation() const {
    return EInteractionRange::Close;
}

float UInteractableComponent::GetInteractionMeshDot_Implementation() const {
    return 0.0f;
}

EInteractionRiskType UInteractableComponent::GetDefaultRiskType() const {
    return EInteractionRiskType::None;
}

EInteractableState UInteractableComponent::GetDefaultInteractionState() const {
    return EInteractableState::None;
}

EInteractionRange UInteractableComponent::GetDefaultInteractionRange() const {
    return EInteractionRange::Close;
}

float UInteractableComponent::GetDefaultInteractionMeshDot() const {
    return 0.0f;
}

void UInteractableComponent::EndInteraction() {
}

void UInteractableComponent::EndAbilityInteraction() {
}

bool UInteractableComponent::DoesQuestRequireImportantHighlight() const {
    return false;
}


