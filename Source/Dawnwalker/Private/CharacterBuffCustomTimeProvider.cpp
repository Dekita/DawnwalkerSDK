#include "CharacterBuffCustomTimeProvider.h"

UCharacterBuffCustomTimeProvider::UCharacterBuffCustomTimeProvider() {
}

float UCharacterBuffCustomTimeProvider::GetTotalDuration(const FGameplayEffectSpec& EffectSpec) const {
    return 0.0f;
}

float UCharacterBuffCustomTimeProvider::GetTimeRemaining(const FGameplayEffectSpec& EffectSpec) const {
    return 0.0f;
}


