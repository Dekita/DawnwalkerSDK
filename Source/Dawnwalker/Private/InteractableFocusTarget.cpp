#include "InteractableFocusTarget.h"
#include "GameplayWidgetComponent.h"
#include "FocusableComponent.h"
#include "InteractableComponent.h"
#include "QuestComponent.h"

AInteractableFocusTarget::AInteractableFocusTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UFocusableComponent>(TEXT("Focusable"));
    this->FocusableComponent = (UFocusableComponent*)RootComponent;
    this->TargetHighlightActor = NULL;
    this->bIncludeAttachedActorsInHighlight = false;
    this->FocusableObjectCategory = EFocusableObjectCategory::Default;
    this->HighlightCategory = 0;
    this->bShowWidgetOnFocusEnter = true;
    this->bIsInteractableOnlyAfterFocus = true;
    this->MaxDistanceToPlayerToShowFocusWidget = 3000.00f;
    this->bDisableAfterUse = true;
    this->QuestComponent = CreateDefaultSubobject<UQuestComponent>(TEXT("Quest"));
    this->FocusWidgetComponent = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("Focus Widget"));
    this->InteractableComponent = CreateDefaultSubobject<UInteractableComponent>(TEXT("Interactable"));
    this->bCanBeInteractive = true;
    this->bIsEnabled = true;
    this->bWasInteracted = false;
    this->bShouldFocusWidgetBeVisible = false;
    this->FocusWidgetComponent->SetupAttachment(RootComponent);
    this->InteractableComponent->SetupAttachment(RootComponent);
}

void AInteractableFocusTarget::SetInteractionEnabled(bool bInShouldBeEnabled) const {
}

void AInteractableFocusTarget::SetEnabled(bool bInShouldBeEnabled) {
}

void AInteractableFocusTarget::OnLeftFocus_Implementation() {
}

void AInteractableFocusTarget::OnInteractionStarted_Implementation() {
}

void AInteractableFocusTarget::OnInteractionEnded_Implementation() {
}

void AInteractableFocusTarget::OnEnteredFocus_Implementation() {
}

bool AInteractableFocusTarget::IsEnabled() const {
    return false;
}

bool AInteractableFocusTarget::CanBeInteractedWith() const {
    return false;
}


