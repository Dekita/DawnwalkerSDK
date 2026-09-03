#include "VampireHungerSubsystem.h"

UVampireHungerSubsystem::UVampireHungerSubsystem() {
    this->bIsPlayerVampire = false;
    this->VampireHungerLevel = EVampireHunger::Low;
    this->bOverrideHungerEffects = false;
    this->HungerEffectsOverrideLerpA = EVampireHunger::Low;
    this->HungerEffectsOverrideLerpB = EVampireHunger::High;
    this->HungerEffectsOverrideLerpValue = 0.50f;
    this->LoadedVampireHungerTable = NULL;
    this->LoadedVampireHungerAbility = NULL;
    this->LoadedVampireHungerEffectData = NULL;
}

void UVampireHungerSubsystem::OverrideHungerEffects(const float InLerpAlpha, const EVampireHunger InHungerEffectA, const EVampireHunger InHungerEffectB) {
}

void UVampireHungerSubsystem::OnBloodValueChanged() {
}

FVampireHungerRow UVampireHungerSubsystem::GetVampireHungerRow(const EVampireHunger InLevel) const {
    return FVampireHungerRow{};
}

EVampireHunger UVampireHungerSubsystem::GetVampireHungerLevel() const {
    return EVampireHunger::Low;
}

UVampireHungerEffectDataAsset* UVampireHungerSubsystem::GetVampireHungerEffectData() const {
    return NULL;
}

FVampireHungerRow UVampireHungerSubsystem::GetCurrentVampireHungerRow() const {
    return FVampireHungerRow{};
}

void UVampireHungerSubsystem::ClearHungerEffectsOverride() {
}

bool UVampireHungerSubsystem::CheckVampireHungerThreshold(const EVampireHunger RequiredHunger, const EVampireHungerCondition Condition) const {
    return false;
}


