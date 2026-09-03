#pragma once
#include "CoreMinimal.h"
#include "CustomEnemiesEffects.h"
#include "FocusAbilityBase.h"
#include "FocusAbilityGameplayEffect.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayEffectSpecHandle.h"
#include "GameplayTagContainer.h"
#include "CustomStunData.h"
#include "FocusCombatAttackCreatureMontageSet.h"
#include "Templates/SubclassOf.h"
#include "CombatFocusAbilityBase.generated.h"

class AActor;
class UAbilitySystemComponent;
class UFeedbackBehavior;
class UGameplayAbility;
class UGameplayEffect;
class UObject;

UCLASS(Abstract, Blueprintable)
class DOGWOODCOMBAT_API UCombatFocusAbilityBase : public UFocusAbilityBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableHardLockOnCasting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchToClosestThreatTargetOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCheckHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHitDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnHitEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* OnHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoopEffectUntilFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusCombatAttackCreatureMontageSet> AttackCreatureMontageSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBlockedOnBosses;
    
public:
    UCombatFocusAbilityBase();

    UFUNCTION(BlueprintCallable)
    bool WillTargetDieAfterHit(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void TryApplyFocusAbilityGameplayEffectToTarget(UPARAM(Ref) FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, UPARAM(Ref) FGameplayAbilityTargetDataHandle& Target);
    
    UFUNCTION(BlueprintCallable)
    void TryApplyAfterTargetDiedEffects();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void ToggleCustomSpecificEffectsForEnemies(UObject* WorldContext, const TArray<FCustomEnemiesEffects>& CustomEnemiesEffects, bool bEnabled);
    
protected:
    UFUNCTION(BlueprintCallable)
    void PlayCustomStunMontagesOnTarget(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData, UPARAM(Ref) FCustomStunData& CustomStunData);
    
public:
    UFUNCTION(BlueprintCallable)
    void PauseAppliedGameplayEffects(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInstaKill();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHitWindowChanged(int32 HitWindowIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHit();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectSpecHandle MakeActiveAbilityEffectSpecHandleForDamageASCBased(TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetASC, float Magnitude, float MultiplierFraction);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectSpecHandle MakeActiveAbilityEffectSpecHandleForDamage(TSubclassOf<UGameplayEffect> EffectClass, FGameplayAbilityTargetDataHandle Target, float Magnitude, float MultiplierFraction);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayEffectSpecHandle MakeActiveAbilityEffectSpecHandleBasic(const UGameplayAbility* Source, TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, float duration, float Magnitude, float EffectDamageMultiplier);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayEffectSpecHandle MakeActiveAbilityEffectSpecHandle(TSubclassOf<UGameplayEffect> EffectClass, UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 Level, float Magnitude, float EffectDamageMultiplier, bool bOfflineCalc) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetNotifyHitTags();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    float GetEffectDurationTimeScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEffectDamageMultiplier(const FFocusAbilityGameplayEffect& Effect, int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetCalculatedIncomingDamage(UAbilitySystemComponent* TargetAscComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetApplyChanceMultiplier(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void CheckForInstaKill(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectToActorIfAllowed(UPARAM(Ref) FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, AActor* TargetActor);
    
};

