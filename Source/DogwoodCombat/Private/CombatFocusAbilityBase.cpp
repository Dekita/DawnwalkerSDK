#include "CombatFocusAbilityBase.h"
#include "Templates/SubclassOf.h"

UCombatFocusAbilityBase::UCombatFocusAbilityBase() {
    this->DamageClass = NULL;
    this->bEnableHardLockOnCasting = false;
    this->bSwitchToClosestThreatTargetOnEnd = false;
    this->bCheckHitDistance = false;
    this->MaxHitDistance = 300.00f;
    this->OnHitEffect = NULL;
    this->bLoopEffectUntilFinish = false;
    this->bIsBlockedOnBosses = false;
}

bool UCombatFocusAbilityBase::WillTargetDieAfterHit(const AActor* Target) {
    return false;
}

void UCombatFocusAbilityBase::TryApplyFocusAbilityGameplayEffectToTarget(FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, FGameplayAbilityTargetDataHandle& Target) {
}

void UCombatFocusAbilityBase::TryApplyAfterTargetDiedEffects() {
}

void UCombatFocusAbilityBase::ToggleCustomSpecificEffectsForEnemies(UObject* WorldContext, const TArray<FCustomEnemiesEffects>& CustomEnemiesEffects, bool bEnabled) {
}

void UCombatFocusAbilityBase::PlayCustomStunMontagesOnTarget(FGameplayAbilityTargetDataHandle& TargetData, FCustomStunData& CustomStunData) {
}

void UCombatFocusAbilityBase::PauseAppliedGameplayEffects(FGameplayAbilityTargetDataHandle& TargetData) {
}




FGameplayEffectSpecHandle UCombatFocusAbilityBase::MakeActiveAbilityEffectSpecHandleForDamageASCBased(TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetASC, float Magnitude, float MultiplierFraction) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UCombatFocusAbilityBase::MakeActiveAbilityEffectSpecHandleForDamage(TSubclassOf<UGameplayEffect> EffectClass, FGameplayAbilityTargetDataHandle Target, float Magnitude, float MultiplierFraction) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UCombatFocusAbilityBase::MakeActiveAbilityEffectSpecHandleBasic(const UGameplayAbility* Source, TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, float duration, float Magnitude, float EffectDamageMultiplier) {
    return FGameplayEffectSpecHandle{};
}

FGameplayEffectSpecHandle UCombatFocusAbilityBase::MakeActiveAbilityEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 Level, float Magnitude, float EffectDamageMultiplier, bool bOfflineCalc) const {
    return FGameplayEffectSpecHandle{};
}

FGameplayTagContainer UCombatFocusAbilityBase::GetNotifyHitTags_Implementation() {
    return FGameplayTagContainer{};
}

float UCombatFocusAbilityBase::GetEffectDurationTimeScale_Implementation() const {
    return 0.0f;
}

float UCombatFocusAbilityBase::GetEffectDamageMultiplier(const FFocusAbilityGameplayEffect& Effect, int32 AbilityLevel) const {
    return 0.0f;
}

float UCombatFocusAbilityBase::GetCalculatedIncomingDamage_Implementation(UAbilitySystemComponent* TargetAscComponent) {
    return 0.0f;
}

float UCombatFocusAbilityBase::GetApplyChanceMultiplier_Implementation(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Target) {
    return 0.0f;
}

void UCombatFocusAbilityBase::CheckForInstaKill(const AActor* Target) {
}

void UCombatFocusAbilityBase::ApplyEffectToActorIfAllowed(FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, AActor* TargetActor) {
}


