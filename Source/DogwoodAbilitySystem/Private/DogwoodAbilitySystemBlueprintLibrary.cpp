#include "DogwoodAbilitySystemBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

UDogwoodAbilitySystemBlueprintLibrary::UDogwoodAbilitySystemBlueprintLibrary() {
}

bool UDogwoodAbilitySystemBlueprintLibrary::IsEffectInhibited(const UAbilitySystemComponent* OwnerASC, const FActiveGameplayEffectHandle& Effect) {
    return false;
}

float UDogwoodAbilitySystemBlueprintLibrary::GetTargetSlowMotionForCompensation(UObject* WorldContext) {
    return 0.0f;
}

UDogwoodPersistentGEComponent* UDogwoodAbilitySystemBlueprintLibrary::GetGameplayEffectPersistentComponent(TSubclassOf<UGameplayEffect> EffectClass) {
    return NULL;
}

EGameplayEffectDurationType UDogwoodAbilitySystemBlueprintLibrary::GetDurationPolicyByEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec) {
    return EGameplayEffectDurationType::Instant;
}

float UDogwoodAbilitySystemBlueprintLibrary::GetActiveGameplayEffectTotalDuration(FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

float UDogwoodAbilitySystemBlueprintLibrary::GetActiveGameplayEffectRemainingDuration(UObject* WorldContextObject, FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

float UDogwoodAbilitySystemBlueprintLibrary::GetActiveEffectHandleOwnerActorTimeDilation(FActiveGameplayEffectHandle ActiveHandle) {
    return 0.0f;
}

AActor* UDogwoodAbilitySystemBlueprintLibrary::GetActiveEffectHandleOwnerActor(FActiveGameplayEffectHandle ActiveHandle) {
    return NULL;
}

FGameplayTagContainer UDogwoodAbilitySystemBlueprintLibrary::GetActiveEffectHandleAssetTags(FActiveGameplayEffectHandle ActiveHandle) {
    return FGameplayTagContainer{};
}

UGameplayAbility* UDogwoodAbilitySystemBlueprintLibrary::GetAbilityByEffectSpec(const FGameplayEffectSpec& GameplayEffectSpec) {
    return NULL;
}


