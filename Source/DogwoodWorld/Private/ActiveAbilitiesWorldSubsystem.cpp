#include "ActiveAbilitiesWorldSubsystem.h"

UActiveAbilitiesWorldSubsystem::UActiveAbilitiesWorldSubsystem() {
    this->ActiveAbilitiesConfig = NULL;
    this->Slot1Ability = NULL;
    this->Slot2Ability = NULL;
    this->StubLayer = NULL;
}

void UActiveAbilitiesWorldSubsystem::RefreshAvailableAbilities(bool bTargetChanged) {
}

void UActiveAbilitiesWorldSubsystem::OnIsInteractableLockedTagChanged(FGameplayTag GameplayTag, int32 Number) {
}

void UActiveAbilitiesWorldSubsystem::OnIsInFocusModeTagChanged(FGameplayTag GameplayTag, int32 Number) {
}

bool UActiveAbilitiesWorldSubsystem::IsTargetValid() {
    return false;
}

FVector UActiveAbilitiesWorldSubsystem::GetTargetPromptLocation() {
    return FVector{};
}

bool UActiveAbilitiesWorldSubsystem::GetIsPlayerInAbilityFromWorldActivationMode() {
    return false;
}


