#include "TimedEffect.h"
#include "EGameplayEffectDurationType.h"

UTimedEffect::UTimedEffect() {
    this->DurationPolicy = EGameplayEffectDurationType::HasDuration;
}


