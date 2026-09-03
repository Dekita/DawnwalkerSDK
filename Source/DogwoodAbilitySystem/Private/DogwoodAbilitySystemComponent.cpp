#include "DogwoodAbilitySystemComponent.h"
#include "Templates/SubclassOf.h"

UDogwoodAbilitySystemComponent::UDogwoodAbilitySystemComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PersistencyComponent = NULL;
    this->AbilitySubsystem = NULL;
}

void UDogwoodAbilitySystemComponent::ProlongEffects(const FGameplayEffectQuery& Query, float ProlongValue, bool bPercent, bool bSetCurrentTimeAsStartTime, const FGameplayTag& GameplayCueTag) {
}

void UDogwoodAbilitySystemComponent::ProlongEffect(FActiveGameplayEffectHandle& Handle, float ProlongValue, bool bPercent, bool bSetCurrentTimeAsStartTime) {
}

bool UDogwoodAbilitySystemComponent::GetEffectUsesSegments(const FActiveGameplayEffectHandle& Handle) {
    return false;
}

int32 UDogwoodAbilitySystemComponent::GetEffectSegmentsLeft(const FActiveGameplayEffectHandle& Handle) {
    return 0;
}

int32 UDogwoodAbilitySystemComponent::GetEffectDurationInSegments(const FActiveGameplayEffectHandle& Handle) {
    return 0;
}

float UDogwoodAbilitySystemComponent::GetEffectClassDurationAdditionalSegments(const TSubclassOf<UGameplayEffect> GameplayEffectClass) const {
    return 0.0f;
}

void UDogwoodAbilitySystemComponent::ExtendGameplayEffectDuration(FActiveGameplayEffectHandle& Handle, float ExtraTime, bool bAddToRemainingTime) {
}


