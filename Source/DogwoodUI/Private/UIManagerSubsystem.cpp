#include "UIManagerSubsystem.h"

UUIManagerSubsystem::UUIManagerSubsystem() {
    this->DialogueUIManager = NULL;
    this->ActiveFrontendWidget = NULL;
    this->DayPhasesStringTable = NULL;
    this->GenericOptionsTable = NULL;
}

bool UUIManagerSubsystem::ShouldShowPopupWidgets() const {
    return false;
}

bool UUIManagerSubsystem::ShouldShowGameplayWidgets() const {
    return false;
}

void UUIManagerSubsystem::SetSystemIndicatorActive(ESystemIndicatorFlag Flag, bool bActive) {
}

void UUIManagerSubsystem::SetShowPopupWidgets(bool bInShow) {
}

void UUIManagerSubsystem::SetShowGameplayWidgets(bool bInShow) {
}

void UUIManagerSubsystem::RegisterActivePopup(UDWActivatableWidget* Popup) {
}

void UUIManagerSubsystem::OnWindowFocusChanged(bool bFocusedNow) {
}

void UUIManagerSubsystem::OnApplicationFocusChanged() {
}

bool UUIManagerSubsystem::IsSystemIndicatorActive(ESystemIndicatorFlag Flag) {
    return false;
}

UDWActivatableWidget* UUIManagerSubsystem::GetActivePopup(const TSoftClassPtr<UDWActivatableWidget>& PopupClass) const {
    return NULL;
}

void UUIManagerSubsystem::DeactivateAllPopups() {
}

bool UUIManagerSubsystem::CanShowPauseMenu() {
    return false;
}


