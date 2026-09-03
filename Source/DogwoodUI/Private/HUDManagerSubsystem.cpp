#include "HUDManagerSubsystem.h"

UHUDManagerSubsystem::UHUDManagerSubsystem() {
    this->TimeSystemDisplayOption = ETimeDisplayOption::None;
    this->HUDWidget = NULL;
    this->bPlayerHiddenHud = false;
}

void UHUDManagerSubsystem::SetTimeDisplayOption(ETimeDisplayOption InNewDisplayOption) {
}

void UHUDManagerSubsystem::SetHUDVisible(bool bHudVisible) {
}

void UHUDManagerSubsystem::SetAreFocusAbilitiesAvailable(bool bInAvailable) {
}

void UHUDManagerSubsystem::RegisterHUDWidget(UWidget* InWidget) {
}

void UHUDManagerSubsystem::RegisterHUDElement(UNamedToggleableContainer* Element) {
}

FHUDPresetHandle UHUDManagerSubsystem::PushHUDPreset(UHUDVisibilityPreset* InPreset) {
    return FHUDPresetHandle{};
}

bool UHUDManagerSubsystem::PopHUDPreset(const FHUDPresetHandle& Handle) {
    return false;
}

bool UHUDManagerSubsystem::IsHUDVisible() const {
    return false;
}

ETimeDisplayOption UHUDManagerSubsystem::GetTimeDisplayOption() const {
    return ETimeDisplayOption::None;
}

bool UHUDManagerSubsystem::GetAreFocusAbilitiesAvailable() const {
    return false;
}

UWidget* UHUDManagerSubsystem::GetActiveGameHUDWidget() const {
    return NULL;
}

bool UHUDManagerSubsystem::CanDisplayFocusAbilityHpBar(AActor* BarOwner) const {
    return false;
}


