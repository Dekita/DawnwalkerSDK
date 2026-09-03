#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ItemHandle.h"
#include "CreatureTypeContainer.h"
#include "GameplayAbility.h"
#include "GameplayAbilityTargetDataHandle.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "ActiveAbilityTag.h"
#include "EAbilityActivationOutcome.h"
#include "EAbilityCostOutcomeMask.h"
#include "ECombatFocusTargetingType.h"
#include "EFocusAbilityStatType.h"
#include "EFocusAbilityType.h"
#include "ESynchronizationPositionOrientation.h"
#include "EffectUIData.h"
#include "FocusAbilityGameplayEffect.h"
#include "FocusAbilityInterface.h"
#include "FocusAbilityLevelDefinition.h"
#include "Templates/SubclassOf.h"
#include "FocusAbilityBase.generated.h"

class AActor;
class UAbilitySystemComponent;
class UEnvQuery;
class UFocusAbilityLevelSequence;
class UGameplayEffect;
class UMotionWarpingComponent;
class UObject;
class UPaperSprite;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class DOGWOODFOCUS_API UFocusAbilityBase : public UGameplayAbility, public IFocusAbilityInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAbilityTargetDataHandle TargetDataCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNeedsHoldToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SuccessChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AbilityRangeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CooldownTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFocusAbilityLevelDefinition> Levels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFocusAbilityStatType MainStatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UPaperSprite> IconSprite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreatureTypeContainer AllowedCreatures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* AlternateTeleportAfterSequenceQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumVerticalDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumVerticalDifference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOpenWorldPreCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideStunApplicationRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTotalDurationInTooltipHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AbilityWarpingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WarpPositionQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* WarpPositionQueryAlternative;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEQSButClosestToTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSyncTargetToPlayerIfRequestedByMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForcePlayerRotationToTargetOnEndWarping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UObject>> AdditionalResourcesToLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseAlternativeEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinWorkingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWorkingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrySkipEnemyReactionAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WarpPositionFromEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWarpPositionFromEnvQueryValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastKnownTargetPosition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActiveAbilityTag AbilityIdentificationTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMotionWarpingComponent> MotionWarpingComponent;
    
public:
    UFocusAbilityBase();

    UFUNCTION(BlueprintCallable)
    void TryForcePlayerRotationToTarget();
    
    UFUNCTION(BlueprintCallable)
    void TryDieWithNoAnimation(const FGameplayAbilityTargetDataHandle& TargetData, bool bWasInGameplay);
    
    UFUNCTION(BlueprintCallable)
    void TogglePostProcessModeOnCharacters(bool bEnabled, int32 StencilValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool TargetHasGameplayEffectWithTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldUseAlternativeEQSQuery();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBeDisplayedInChargeSlot() const;
    
    UFUNCTION(BlueprintCallable)
    void SetTargetDataCache(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable)
    bool SetSynchronizedWarpLocationForTarget(bool bOrientateBackToPlayer, bool bRotationOnly, ESynchronizationPositionOrientation SynchronizationOrientation, bool bSynchronizeZAxis);
    
    UFUNCTION(BlueprintCallable)
    void SetInstantCastNoPlayerMontage(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RefreshEQSWarpLocation();
    
    UFUNCTION(BlueprintCallable)
    bool PlayAbilitySubsequence(UFocusAbilityLevelSequence* SubSequence);
    
    UFUNCTION(BlueprintCallable)
    void PlayAbilitySequences(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData, const bool bIsHit);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreEndAbility();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputUnlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTargetStillValid(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsSpecialTypeCreatureAllowed(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRequiredItemEquipped(AActor* PlayerActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInValidForm(UAbilitySystemComponent* InstigatorAsc) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInValidCombatState(UAbilitySystemComponent* InstigatorAsc, UAbilitySystemComponent* TargetASC) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEffectApplicableWithCurrentWeaponType(AActor* Instigator, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatureAllowedForEffect(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCreatureAllowed(const AActor* TargetActor, const FCreatureTypeContainer& AllowedCreaturesContainer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorCreatureTypeInContainer(const AActor* TargetActor, const FCreatureTypeContainer& AllowedCreaturesContainer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsActorCreatureTypeAllowedForEffectByTag(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityPassive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityInstant();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityApplyingBaseDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTotalDuration(AActor* Instigator, AActor* TargetActor, bool bTakeBaseDuration, int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECombatFocusTargetingType GetTargetingTypeForLevel(int32 AbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECombatFocusTargetingType GetTargetingType() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTargetActor(const FGameplayAbilityTargetDataHandle& TargetData) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetTagForSpecialMontagePair();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpecialEffectApplyChanceLevelDiffBased(const AActor* Instigator, const AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetShouldNotifyNpcsAboutAbilityStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetRotatorToMainTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredItemQuantity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FItemHandle GetRequiredItemForTarget(AActor* AbilityOwner, const AActor* Target, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRemainingCooldown(AActor* Instigator, float& RemainingCooldownInSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetName();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetMotionWarpingTarget();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMontageOffsetForTarget(AActor* Player, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    float GetMainStatForPreview(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, EFocusAbilityStatType& OutMainStatType, bool bPreviewOnly);
    
    UFUNCTION(BlueprintCallable)
    float GetMainStat(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, EFocusAbilityStatType& OutMainStatType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetMainDamageTotal(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFocusAbilityLevelDefinition GetLevelDefinition(const int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInstantCastNoPlayerMontage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPaperSprite> GetIconSprite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercentageCost(UAbilitySystemComponent* AbilitySystem, bool bPreviewModeOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthCost(UAbilitySystemComponent* AbilitySystem, bool bPreviewModeOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetHealInterval(int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetFunctionalDescription(AActor* AbilityOwner, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFocusAbilityType GetFocusAbilityType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEffectValueToApply(float BaseEffectValue, AActor* Instigator, AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetEffectApplyChanceValue(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Instigator, const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFocusAbilityLevelDefinition GetCurrentLevelDefinition(UAbilitySystemComponent* AbilitySystem) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCostInChargeSlots(AActor* AbilityOwner, AActor* Target, int32 Level) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCooldownFinalValueForDisplay(const float BaseCooldown, AActor* Instigator);
    
public:
    UFUNCTION(BlueprintCallable)
    float GetCalculatedIncomingDamageOfflineForEffect(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, TSubclassOf<UGameplayEffect> DamageEffectClass, float SummarizedDamageMultiplier, bool TrueDamage);
    
    UFUNCTION(BlueprintCallable)
    float GetCalculatedIncomingDamageOffline(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, bool TrueDamage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAlternativeStatValue(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAllRequiredItems(AActor* AbilityOwner, int32 Level, TMap<FItemHandle, int32>& OutItems) const;
    
    UFUNCTION(BlueprintCallable)
    float GetActualEffectApplyChance(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Insigator, const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UClass* GetAbilityToActivateClass(const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbilityLevelFromSpecByASC(UAbilitySystemComponent* OwnerASC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAbilityLevelFromSpec(AActor* AbilityOwner) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FActiveAbilityTag GetAbilityIdentificationTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool FilterTargets(UPARAM(Ref) TArray<AActor*>& ActorsInRange, AActor* Instigator, AActor* FocusTarget);
    
    UFUNCTION(BlueprintCallable)
    void CollectEffectsUIData(TArray<FEffectUIData>& OutEffectsData, TArray<FEffectUIData>& OutEffectsNotAppliedData, AActor* Instigator, AActor* TargetActor, int32 Level);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CheckCustomCondition(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Target);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool CanDieFactCondition(const AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBindToQuickslot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeActivated(AActor* Instigator, AActor* Target, EAbilityActivationOutcome& AbilityActivationOutcome, EAbilityCostOutcomeMask& AbilityCostOutcomeMask);
    
    UFUNCTION(BlueprintCallable)
    void ApplyEffectsAndPlayReaction(UPARAM(Ref) FGameplayAbilityTargetDataHandle& TargetData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ActorHasGameplayEffectWithTag(const AActor* Actor, const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable)
    static void AbortActionPoint(AActor* TargetActor);
    

    // Fix for true pure virtual functions not being implemented
};

