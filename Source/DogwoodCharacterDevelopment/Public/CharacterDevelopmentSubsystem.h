#pragma once
#include "CoreMinimal.h"
#include "LootGenerationInterface.h"
#include "QuestSkillReward.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "EQuestExperienceRewardAmount.h"
#include "CharDevAbilitySkillTabRow.h"
#include "ECharacterDevelopmentAbilityType.h"
#include "ECharacterDevelopmentMode.h"
#include "ECharacterDevelopmentModeUndiscoveredType.h"
#include "ETraitUnavailableReason.h"
#include "OnActiveAbilityChangedDelegate.h"
#include "OnLevelUpDelegate.h"
#include "OnMutationChangedDelegate.h"
#include "OnMutationLevelUpDelegate.h"
#include "OnPlayCharacterDevelopmentVideoDelegate.h"
#include "OnSkillTreeActiveChangedDelegate.h"
#include "OnSlotEquipmentActiveChangedDelegate.h"
#include "OnTraitBoughtDelegateDelegate.h"
#include "OnTraitEquippedChangeDelegateDelegate.h"
#include "OnTraitLevelAvailableDelegateDelegate.h"
#include "OnTraitUnlockedDelegate.h"
#include "OnTraitsResetDelegateDelegate.h"
#include "OnXPChangedDelegate.h"
#include "OnXPGainedDelegate.h"
#include "Templates/SubclassOf.h"
#include "TraitPointsChangedDelegateDelegate.h"
#include "TraitUnblockVideos.h"
#include "CharacterDevelopmentSubsystem.generated.h"

class UAbilitySystemComponent;
class UCurveFloat;
class UDataTable;
class UGameplayAbility;
class UGameplayEffect;
class UItemBaseDataAsset;
class UItemCharDevDataAsset;
class UPaperSprite;
class USkillBookPoolDataAsset;
class UStatsConfig;
class UTraitAsset;

UCLASS(Blueprintable)
class DOGWOODCHARACTERDEVELOPMENT_API UCharacterDevelopmentSubsystem : public UGameInstanceSubsystem, public ISaveGameInterface, public ILootGenerationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USkillBookPoolDataAsset* SkillBookPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCurveFloat* SkillsToLevelCurve;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLevelUp OnLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutationLevelUp OnMutationLevelUp;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMutationChanged OnMutationGained;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXPChanged OnExperienceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnXPGained OnExperienceGained;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTraitPointsChangedDelegate OnTraitPointsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitsResetDelegate OnTraitsReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitLevelAvailableDelegate OnTraitLevelAvailable;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitBoughtDelegate OnTraitBought;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitEquippedChangeDelegate OnTraitEquippedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayCharacterDevelopmentVideo OnPlayVideo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkillTreeActiveChanged OnSkillTreeActiveChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitUnlocked OnTraitUnlocked;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTraitUnlocked OnTraitObtainedFromQuestReward;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActiveAbilityChanged OnActiveAbilityChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotEquipmentActiveChanged OnSlotEquipmentActiveChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTraitAsset* TraitFocusTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlternativeShadowstepExit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RequestedDisplayedTrait;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTraitAsset*> AllTraits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UTraitAsset*> AllTraitsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UGameplayAbility*, UTraitAsset*> AbilityToTraitMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UTraitAsset*, UGameplayAbility*> TraitToGrantedAbilityMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAbilitySystemComponent> PlayerASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedAbilitySkillsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedQuestXPRewardTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedLevelUpXPRequirementTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* LoadedCombatRewardsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterDevelopmentAbilityType, int32> BoughtAbilityTypeCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterDevelopmentAbilityType, FTraitUnblockVideos> LoadedTraitUnblockVideos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECharacterDevelopmentMode, int32> UnlockedTraitsPointCostsPerTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<ECharacterDevelopmentMode> UnlockedUltimates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStatsConfig* StatsConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedVampireMutationDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedShadowstepDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedAntiGravDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedClawRideDisabledEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedAllowHumanAbilitiesEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedAllowVampireAbilitiesEffectClass;
    
public:
    UCharacterDevelopmentSubsystem();

    UFUNCTION(BlueprintCallable)
    bool UnlockTrait(UTraitAsset* Trait, int32 Level, bool bTriggerBoughtEvent, bool bUnlockParent, bool bShowNotification);
    
    UFUNCTION(BlueprintCallable)
    void UnlockRandomTrait(const ECharacterDevelopmentMode SkillTree, const ECharacterDevelopmentAbilityType SkillType);
    
    UFUNCTION(BlueprintCallable)
    void UnlockAllTraits(bool bUnlock, bool bUnblock, bool bUnhide, bool bUnblockNextLevelOnly);
    
    UFUNCTION(BlueprintCallable)
    bool UnhideTrait(UTraitAsset* Trait);
    
    UFUNCTION(BlueprintCallable)
    void UnblockTraitToLevel(const FName& InTraitID, const int32 TargetLevel, const bool bCanShowVideo, const bool bShowNotification);
    
    UFUNCTION(BlueprintCallable)
    void UnblockTraitNextLevel(const FName& InTraitID, const bool bCanShowVideo, const bool bShowNotification, const UItemCharDevDataAsset* ItemToRemove);
    
    UFUNCTION(BlueprintCallable)
    void TryPlayTraitUnblockVideo(const UTraitAsset* Trait);
    
    UFUNCTION(BlueprintCallable)
    bool TryBuyTrait(UTraitAsset* Trait, int32 Level);
    
    UFUNCTION(BlueprintCallable)
    void TryAutoEquipSlot(const ECharacterDevelopmentAbilityType Type, int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void SpendTraitPoints(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SpendTime(const int32 Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVampireMutationEnabled(bool Value) const;
    
    UFUNCTION(BlueprintCallable)
    void SetUseDemoActiveAbilities(const bool bDemoAA);
    
    UFUNCTION(BlueprintCallable)
    void SetTraitPointsAmount(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    bool SetTraitEquipped(const UTraitAsset* Trait, bool bEquipped, const bool bForce, int32 SlotId);
    
    UFUNCTION(BlueprintCallable)
    void SetOpenedSkillTree(const ECharacterDevelopmentMode SkillTree);
    
    UFUNCTION(BlueprintCallable)
    void SetModeUndiscoveredState(const ECharacterDevelopmentMode Mode, const ECharacterDevelopmentModeUndiscoveredType State);
    
    UFUNCTION(BlueprintCallable)
    void SetMeleeActionsUnlocked(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultFocusAbilities(const TMap<TSubclassOf<UGameplayAbility>, int32>& DefaultFocusAbilities);
    
    UFUNCTION(BlueprintCallable)
    void SetCombatFocusAbilityActive(const UTraitAsset* Trait, bool bActive, bool bDemo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterDevelopmentMode(const ECharacterDevelopmentMode Mode, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterDevelopmentAbilitiesMode(const ECharacterDevelopmentAbilityType Mode, const bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetBoundToAutoEquipEvents(bool bBound);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllTraits();
    
    UFUNCTION(BlueprintCallable)
    void RegisterTraitUnblockAsViewed(const FName& InTraitID, const int32 TargetLevel);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTraitUnblockAsDiscovered(const FName& InTraitID, const int32 TargetLevel);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveTraitPoints(const int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveQuestSkillRewards(const TArray<FQuestSkillReward>& Rewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasTrait(const FName TraitID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool PlayerHasAnyTrait(const TArray<FName>& TraitIDs) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharDevItemUsed(const UItemCharDevDataAsset* CharDevItemUsed);
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifySlotEquipmentActiveChanged(const bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingDemoActiveAbilities() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitSlotEquipped(const ECharacterDevelopmentAbilityType Type, int32 SlotId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitLevelLocked(const int32 TraitLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitLevelBlocked(const UTraitAsset* Trait, int32 InLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitLevelAvailableAtCurrentTraitPointSpent(UTraitAsset* Trait, const int32 TraitLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitLevelAvailableAtCurrentPlayerLevel(UTraitAsset* Trait, const int32 TraitLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitHidden(UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitEquipped(const UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTraitAvailable(UTraitAsset* Trait, int32 Level, uint8& OutUnavailableReasons) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMatchingUnavailabilityReason(const uint8 Reasons, const ETraitUnavailableReason Reason) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockedByQuest(const UTraitAsset* Trait, int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyCharacterDevelopmentModeEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnotherUltimateAlreadyUnlocked(UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraitUnblockBeenViewed(const FName& InTraitID, const int32 TargetLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTraitUnblockBeenDiscovered(const FName& InTraitID, const int32 TargetLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasMeleeActionsUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetXPAmountByRewardType(EQuestExperienceRewardAmount RewardAmount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetUserEquippedAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockedTraitPointCosts(const ECharacterDevelopmentMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraitUnblockedLevel(const FName& InTraitID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraitPointAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTraitLevel(const UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UPaperSprite> GetTraitIconSprite(const FName TraitID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayAbility* GetTraitGameplayAbility(const UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTraitAsset* GetTrait(const FName& TraitName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSpentTraitPointAmount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetRandomEquippableAbility(const ECharacterDevelopmentAbilityType Type, UGameplayAbility*& OutAbility, int32& OutAbilityLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterDevelopmentMode GetOpenedSkillTree() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnceBoughtTraitLevel(const UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextBlockedTraitLevelWithBooks(const UItemBaseDataAsset* SkillBookAsset) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextBlockedTraitLevel(const UTraitAsset* Trait) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetModeUndiscoveredStateTag(const ECharacterDevelopmentMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECharacterDevelopmentModeUndiscoveredType GetModeUndiscoveredState(const ECharacterDevelopmentMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedQuantityLimit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedAbilityTypeLimit(const ECharacterDevelopmentAbilityType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedAbilityTypeCount(const ECharacterDevelopmentAbilityType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UGameplayAbility* GetEquippedAbility(const ECharacterDevelopmentAbilityType Type, int32 SlotIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEquippedAbilitiesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippedAbilities(const ECharacterDevelopmentAbilityType Type, const bool bUserEquipped, TArray<UGameplayAbility*>& OutAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippableTraits(const ECharacterDevelopmentAbilityType Type, TArray<UTraitAsset*>& OutTraits) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEquippableAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentXP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMutationLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMutationCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevelXPRequirement(int32 Level) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentLevelXPPercentage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterDevelopmentMode(const ECharacterDevelopmentMode Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCharacterDevelopmentAbilitiesMode(const ECharacterDevelopmentAbilityType Mode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoughtTraitsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBoughtAbilitiesCountByType(const ECharacterDevelopmentAbilityType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAlwaysEquippedAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UTraitAsset*> GetAllTraits() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FCharDevAbilitySkillTabRow GetAbilitySkillDataByActiveAbility(UGameplayAbility* Ability) const;
    
    UFUNCTION(BlueprintCallable)
    void ForceLevelUpTo(int32 Level, bool bReceiveTraitPoints);
    
    UFUNCTION(BlueprintCallable)
    void ForceLevelUp();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAutoEquipAbilities() const;
    
    UFUNCTION(BlueprintCallable)
    int32 AddQuestXP(EQuestExperienceRewardAmount RewardAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void AddMutationCharges(const int32 ChargeValue) const;
    

    // Fix for true pure virtual functions not being implemented
};

