#include "ChapelSystem.h"

UChapelSystem::UChapelSystem() {
    this->ActiveShrineWidget = NULL;
    this->ChapelHudPreset = NULL;
}

bool UChapelSystem::WasChapelInteracted(const FGuid& ID) const {
    return false;
}

void UChapelSystem::TriggerChapelDialogue(const FChapelState& InState, AActor* NewChapelActor) {
}

void UChapelSystem::OnUiShown(EFadeState PreviousFadeState, EFadeState NextFadeState) {
}

void UChapelSystem::OnShowUiFadeStateChanged(EFadeState PreviousFadeState, EFadeState NextFadeState) {
}

void UChapelSystem::OnHideUiFadeStateChanged(EFadeState PreviousFadeState, EFadeState NextFadeState) {
}

void UChapelSystem::NotifyPanelActiveChanged(const FGameplayTag& ChapelPanelTag, const bool bActive) {
}

bool UChapelSystem::IsUIShown() const {
    return false;
}

bool UChapelSystem::IsPanelActive(const FGameplayTag& ChapelPanelTag) const {
    return false;
}

bool UChapelSystem::IsChoiceEnabled(EChapelDialogueResult Choice) const {
    return false;
}

void UChapelSystem::HandleChapelChoice(EChapelDialogueResult Choice) {
}

FChapelState UChapelSystem::GetChapelStateByObjectPath(const FString& InObjectPathName) const {
    return FChapelState{};
}

FChapelState UChapelSystem::GetChapelStateByID(const FGuid& ID) const {
    return FChapelState{};
}


