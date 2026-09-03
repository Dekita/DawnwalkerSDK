#include "CharacterDevelopmentSubsystem.h"
#include "Templates/SubclassOf.h"

UCharacterDevelopmentSubsystem::UCharacterDevelopmentSubsystem() {
    this->SkillBookPool = NULL;
    this->SkillsToLevelCurve = NULL;
    this->TraitFocusTarget = NULL;
    this->bAlternativeShadowstepExit = false;
    this->LoadedAbilitySkillsTable = NULL;
    this->LoadedQuestXPRewardTable = NULL;
    this->LoadedLevelUpXPRequirementTable = NULL;
    this->LoadedCombatRewardsTable = NULL;
    this->StatsConfig = NULL;
    this->LoadedVampireMutationDisabledEffectClass = NULL;
    this->LoadedShadowstepDisabledEffectClass = NULL;
    this->LoadedAntiGravDisabledEffectClass = NULL;
    this->LoadedClawRideDisabledEffectClass = NULL;
    this->LoadedAllowHumanAbilitiesEffectClass = NULL;
    this->LoadedAllowVampireAbilitiesEffectClass = NULL;
}

bool UCharacterDevelopmentSubsystem::UnlockTrait(UTraitAsset* Trait, int32 Level, bool bTriggerBoughtEvent, bool bUnlockParent, bool bShowNotification) {
    return false;
}

void UCharacterDevelopmentSubsystem::UnlockRandomTrait(const ECharacterDevelopmentMode SkillTree, const ECharacterDevelopmentAbilityType SkillType) {
}

void UCharacterDevelopmentSubsystem::UnlockAllTraits(bool bUnlock, bool bUnblock, bool bUnhide, bool bUnblockNextLevelOnly) {
}

bool UCharacterDevelopmentSubsystem::UnhideTrait(UTraitAsset* Trait) {
    return false;
}

void UCharacterDevelopmentSubsystem::UnblockTraitToLevel(const FName& InTraitID, const int32 TargetLevel, const bool bCanShowVideo, const bool bShowNotification) {
}

void UCharacterDevelopmentSubsystem::UnblockTraitNextLevel(const FName& InTraitID, const bool bCanShowVideo, const bool bShowNotification, const UItemCharDevDataAsset* ItemToRemove) {
}

void UCharacterDevelopmentSubsystem::TryPlayTraitUnblockVideo(const UTraitAsset* Trait) {
}

bool UCharacterDevelopmentSubsystem::TryBuyTrait(UTraitAsset* Trait, int32 Level) {
    return false;
}

void UCharacterDevelopmentSubsystem::TryAutoEquipSlot(const ECharacterDevelopmentAbilityType Type, int32 SlotId) {
}

void UCharacterDevelopmentSubsystem::SpendTraitPoints(const int32 Value) {
}

void UCharacterDevelopmentSubsystem::SpendTime(const int32 Value) {
}

void UCharacterDevelopmentSubsystem::SetVampireMutationEnabled(bool Value) const {
}

void UCharacterDevelopmentSubsystem::SetUseDemoActiveAbilities(const bool bDemoAA) {
}

void UCharacterDevelopmentSubsystem::SetTraitPointsAmount(const int32 Value) {
}

bool UCharacterDevelopmentSubsystem::SetTraitEquipped(const UTraitAsset* Trait, bool bEquipped, const bool bForce, int32 SlotId) {
    return false;
}

void UCharacterDevelopmentSubsystem::SetOpenedSkillTree(const ECharacterDevelopmentMode SkillTree) {
}

void UCharacterDevelopmentSubsystem::SetModeUndiscoveredState(const ECharacterDevelopmentMode Mode, const ECharacterDevelopmentModeUndiscoveredType State) {
}

void UCharacterDevelopmentSubsystem::SetMeleeActionsUnlocked(bool Value) {
}

void UCharacterDevelopmentSubsystem::SetDefaultFocusAbilities(const TMap<TSubclassOf<UGameplayAbility>, int32>& DefaultFocusAbilities) {
}

void UCharacterDevelopmentSubsystem::SetCombatFocusAbilityActive(const UTraitAsset* Trait, bool bActive, bool bDemo) {
}

void UCharacterDevelopmentSubsystem::SetCharacterDevelopmentMode(const ECharacterDevelopmentMode Mode, const bool bEnabled) {
}

void UCharacterDevelopmentSubsystem::SetCharacterDevelopmentAbilitiesMode(const ECharacterDevelopmentAbilityType Mode, const bool bEnabled) {
}

void UCharacterDevelopmentSubsystem::SetBoundToAutoEquipEvents(bool bBound) {
}

void UCharacterDevelopmentSubsystem::ResetAllTraits() {
}

void UCharacterDevelopmentSubsystem::RegisterTraitUnblockAsViewed(const FName& InTraitID, const int32 TargetLevel) {
}

void UCharacterDevelopmentSubsystem::RegisterTraitUnblockAsDiscovered(const FName& InTraitID, const int32 TargetLevel) {
}

void UCharacterDevelopmentSubsystem::ReceiveTraitPoints(const int32 Value) {
}

void UCharacterDevelopmentSubsystem::ReceiveQuestSkillRewards(const TArray<FQuestSkillReward>& Rewards) {
}

bool UCharacterDevelopmentSubsystem::PlayerHasTrait(const FName TraitID) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::PlayerHasAnyTrait(const TArray<FName>& TraitIDs) const {
    return false;
}

void UCharacterDevelopmentSubsystem::OnCharDevItemUsed(const UItemCharDevDataAsset* CharDevItemUsed) {
}

void UCharacterDevelopmentSubsystem::NotifySlotEquipmentActiveChanged(const bool bActive) {
}

bool UCharacterDevelopmentSubsystem::IsUsingDemoActiveAbilities() const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitSlotEquipped(const ECharacterDevelopmentAbilityType Type, int32 SlotId) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitLevelLocked(const int32 TraitLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitLevelBlocked(const UTraitAsset* Trait, int32 InLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitLevelAvailableAtCurrentTraitPointSpent(UTraitAsset* Trait, const int32 TraitLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitLevelAvailableAtCurrentPlayerLevel(UTraitAsset* Trait, const int32 TraitLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitHidden(UTraitAsset* Trait) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitEquipped(const UTraitAsset* Trait) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsTraitAvailable(UTraitAsset* Trait, int32 Level, uint8& OutUnavailableReasons) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsMatchingUnavailabilityReason(const uint8 Reasons, const ETraitUnavailableReason Reason) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsLockedByQuest(const UTraitAsset* Trait, int32 Level) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsAnyCharacterDevelopmentModeEnabled() const {
    return false;
}

bool UCharacterDevelopmentSubsystem::IsAnotherUltimateAlreadyUnlocked(UTraitAsset* Trait) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::HasTraitUnblockBeenViewed(const FName& InTraitID, const int32 TargetLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::HasTraitUnblockBeenDiscovered(const FName& InTraitID, const int32 TargetLevel) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::HasMeleeActionsUnlocked() const {
    return false;
}

int32 UCharacterDevelopmentSubsystem::GetXPAmountByRewardType(EQuestExperienceRewardAmount RewardAmount) const {
    return 0;
}

void UCharacterDevelopmentSubsystem::GetUserEquippedAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const {
}

int32 UCharacterDevelopmentSubsystem::GetUnlockedTraitPointCosts(const ECharacterDevelopmentMode Mode) const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetTraitUnblockedLevel(const FName& InTraitID) const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetTraitPointAmount() const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetTraitLevel(const UTraitAsset* Trait) const {
    return 0;
}

TSoftObjectPtr<UPaperSprite> UCharacterDevelopmentSubsystem::GetTraitIconSprite(const FName TraitID) const {
    return NULL;
}

UGameplayAbility* UCharacterDevelopmentSubsystem::GetTraitGameplayAbility(const UTraitAsset* Trait) const {
    return NULL;
}

UTraitAsset* UCharacterDevelopmentSubsystem::GetTrait(const FName& TraitName) const {
    return NULL;
}

int32 UCharacterDevelopmentSubsystem::GetSpentTraitPointAmount() const {
    return 0;
}

void UCharacterDevelopmentSubsystem::GetRandomEquippableAbility(const ECharacterDevelopmentAbilityType Type, UGameplayAbility*& OutAbility, int32& OutAbilityLevel) const {
}

ECharacterDevelopmentMode UCharacterDevelopmentSubsystem::GetOpenedSkillTree() const {
    return ECharacterDevelopmentMode::None;
}

int32 UCharacterDevelopmentSubsystem::GetOnceBoughtTraitLevel(const UTraitAsset* Trait) const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetNextLevel() const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetNextBlockedTraitLevelWithBooks(const UItemBaseDataAsset* SkillBookAsset) const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetNextBlockedTraitLevel(const UTraitAsset* Trait) const {
    return 0;
}

FGameplayTag UCharacterDevelopmentSubsystem::GetModeUndiscoveredStateTag(const ECharacterDevelopmentMode Mode) const {
    return FGameplayTag{};
}

ECharacterDevelopmentModeUndiscoveredType UCharacterDevelopmentSubsystem::GetModeUndiscoveredState(const ECharacterDevelopmentMode Mode) const {
    return ECharacterDevelopmentModeUndiscoveredType::None;
}

int32 UCharacterDevelopmentSubsystem::GetEquippedQuantityLimit() const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetEquippedAbilityTypeLimit(const ECharacterDevelopmentAbilityType Type) const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetEquippedAbilityTypeCount(const ECharacterDevelopmentAbilityType Type) const {
    return 0;
}

UGameplayAbility* UCharacterDevelopmentSubsystem::GetEquippedAbility(const ECharacterDevelopmentAbilityType Type, int32 SlotIdx) const {
    return NULL;
}

int32 UCharacterDevelopmentSubsystem::GetEquippedAbilitiesCount() const {
    return 0;
}

void UCharacterDevelopmentSubsystem::GetEquippedAbilities(const ECharacterDevelopmentAbilityType Type, const bool bUserEquipped, TArray<UGameplayAbility*>& OutAbilities) const {
}

void UCharacterDevelopmentSubsystem::GetEquippableTraits(const ECharacterDevelopmentAbilityType Type, TArray<UTraitAsset*>& OutTraits) const {
}

void UCharacterDevelopmentSubsystem::GetEquippableAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const {
}

int32 UCharacterDevelopmentSubsystem::GetCurrentXP() const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetCurrentMutationLevel() const {
    return 0;
}

float UCharacterDevelopmentSubsystem::GetCurrentMutationCharges() const {
    return 0.0f;
}

int32 UCharacterDevelopmentSubsystem::GetCurrentLevelXPRequirement(int32 Level) const {
    return 0;
}

float UCharacterDevelopmentSubsystem::GetCurrentLevelXPPercentage() const {
    return 0.0f;
}

int32 UCharacterDevelopmentSubsystem::GetCurrentLevel() const {
    return 0;
}

bool UCharacterDevelopmentSubsystem::GetCharacterDevelopmentMode(const ECharacterDevelopmentMode Mode) const {
    return false;
}

bool UCharacterDevelopmentSubsystem::GetCharacterDevelopmentAbilitiesMode(const ECharacterDevelopmentAbilityType Mode) const {
    return false;
}

int32 UCharacterDevelopmentSubsystem::GetBoughtTraitsCount() const {
    return 0;
}

int32 UCharacterDevelopmentSubsystem::GetBoughtAbilitiesCountByType(const ECharacterDevelopmentAbilityType Type) const {
    return 0;
}

void UCharacterDevelopmentSubsystem::GetAlwaysEquippedAbilities(const ECharacterDevelopmentAbilityType Type, TArray<UGameplayAbility*>& OutAbilities) const {
}

TArray<UTraitAsset*> UCharacterDevelopmentSubsystem::GetAllTraits() const {
    return TArray<UTraitAsset*>();
}

FCharDevAbilitySkillTabRow UCharacterDevelopmentSubsystem::GetAbilitySkillDataByActiveAbility(UGameplayAbility* Ability) const {
    return FCharDevAbilitySkillTabRow{};
}

void UCharacterDevelopmentSubsystem::ForceLevelUpTo(int32 Level, bool bReceiveTraitPoints) {
}

void UCharacterDevelopmentSubsystem::ForceLevelUp() {
}

bool UCharacterDevelopmentSubsystem::CanAutoEquipAbilities() const {
    return false;
}

int32 UCharacterDevelopmentSubsystem::AddQuestXP(EQuestExperienceRewardAmount RewardAmount) {
    return 0;
}

void UCharacterDevelopmentSubsystem::AddMutationCharges(const int32 ChargeValue) const {
}


