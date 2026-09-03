#include "FocusAbilityBase.h"
#include "Templates/SubclassOf.h"

UFocusAbilityBase::UFocusAbilityBase() {
    this->bNeedsHoldToActivate = false;
    this->BaseDamageAmount = 0.00f;
    this->SuccessChance = 0.50f;
    this->AbilityRangeOverride = 0.00f;
    this->MainStatType = EFocusAbilityStatType::None;
    this->Icon = NULL;
    this->AlternateTeleportAfterSequenceQuery = NULL;
    this->MinimumVerticalDifference = 0.00f;
    this->MaximumVerticalDifference = 1500.00f;
    this->bIsOpenWorldPreCombat = false;
    this->bOverrideStunApplicationRequirements = false;
    this->bTotalDurationInTooltipHidden = false;
    this->AbilityWarpingName = TEXT("ActiveAbilityWarp");
    this->WarpPositionQuery = NULL;
    this->WarpPositionQueryAlternative = NULL;
    this->bEQSButClosestToTarget = false;
    this->bSyncTargetToPlayerIfRequestedByMontage = false;
    this->bForcePlayerRotationToTargetOnEndWarping = false;
    this->bUseAlternativeEQSQuery = false;
    this->MinWorkingDistance = 0.00f;
    this->MaxWorkingDistance = 2000.00f;
    this->bTrySkipEnemyReactionAbility = false;
    this->bWarpPositionFromEnvQueryValid = false;
}

void UFocusAbilityBase::TryForcePlayerRotationToTarget() {
}

void UFocusAbilityBase::TryDieWithNoAnimation(const FGameplayAbilityTargetDataHandle& TargetData, bool bWasInGameplay) {
}

void UFocusAbilityBase::TogglePostProcessModeOnCharacters(bool bEnabled, int32 StencilValue) {
}

bool UFocusAbilityBase::TargetHasGameplayEffectWithTag(const FGameplayTag& Tag) const {
    return false;
}

bool UFocusAbilityBase::ShouldUseAlternativeEQSQuery_Implementation() {
    return false;
}

bool UFocusAbilityBase::ShouldBeDisplayedInChargeSlot() const {
    return false;
}

void UFocusAbilityBase::SetTargetDataCache(FGameplayAbilityTargetDataHandle& TargetData) {
}

bool UFocusAbilityBase::SetSynchronizedWarpLocationForTarget(bool bOrientateBackToPlayer, bool bRotationOnly, ESynchronizationPositionOrientation SynchronizationOrientation, bool bSynchronizeZAxis) {
    return false;
}

void UFocusAbilityBase::SetInstantCastNoPlayerMontage(bool bEnabled) {
}

void UFocusAbilityBase::RefreshEQSWarpLocation() {
}

bool UFocusAbilityBase::PlayAbilitySubsequence(UFocusAbilityLevelSequence* SubSequence) {
    return false;
}

void UFocusAbilityBase::PlayAbilitySequences(FGameplayAbilityTargetDataHandle& TargetData, const bool bIsHit) {
}



bool UFocusAbilityBase::IsTargetStillValid(FGameplayAbilityTargetDataHandle& TargetData) const {
    return false;
}

bool UFocusAbilityBase::IsSpecialTypeCreatureAllowed(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) {
    return false;
}

bool UFocusAbilityBase::IsRequiredItemEquipped(AActor* PlayerActor) const {
    return false;
}

bool UFocusAbilityBase::IsInValidForm(UAbilitySystemComponent* InstigatorAsc) const {
    return false;
}

bool UFocusAbilityBase::IsInValidCombatState(UAbilitySystemComponent* InstigatorAsc, UAbilitySystemComponent* TargetASC) const {
    return false;
}

bool UFocusAbilityBase::IsEffectApplicableWithCurrentWeaponType(AActor* Instigator, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) const {
    return false;
}

bool UFocusAbilityBase::IsCreatureAllowedForEffect(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) const {
    return false;
}

bool UFocusAbilityBase::IsCreatureAllowed(const AActor* TargetActor, const FCreatureTypeContainer& AllowedCreaturesContainer) const {
    return false;
}

bool UFocusAbilityBase::IsActorCreatureTypeInContainer(const AActor* TargetActor, const FCreatureTypeContainer& AllowedCreaturesContainer) {
    return false;
}

bool UFocusAbilityBase::IsActorCreatureTypeAllowedForEffectByTag(const AActor* TargetActor, const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect) {
    return false;
}

bool UFocusAbilityBase::IsAbilityPassive() const {
    return false;
}

bool UFocusAbilityBase::IsAbilityInstant() {
    return false;
}

bool UFocusAbilityBase::IsAbilityApplyingBaseDamage() const {
    return false;
}

float UFocusAbilityBase::GetTotalDuration(AActor* Instigator, AActor* TargetActor, bool bTakeBaseDuration, int32 Level) const {
    return 0.0f;
}

ECombatFocusTargetingType UFocusAbilityBase::GetTargetingTypeForLevel(int32 AbilityLevel) const {
    return ECombatFocusTargetingType::Single;
}

ECombatFocusTargetingType UFocusAbilityBase::GetTargetingType() const {
    return ECombatFocusTargetingType::Single;
}

AActor* UFocusAbilityBase::GetTargetActor(const FGameplayAbilityTargetDataHandle& TargetData) const {
    return NULL;
}

FGameplayTag UFocusAbilityBase::GetTagForSpecialMontagePair_Implementation() {
    return FGameplayTag{};
}

float UFocusAbilityBase::GetSpecialEffectApplyChanceLevelDiffBased(const AActor* Instigator, const AActor* Target) const {
    return 0.0f;
}

bool UFocusAbilityBase::GetShouldNotifyNpcsAboutAbilityStarted_Implementation() {
    return false;
}

FRotator UFocusAbilityBase::GetRotatorToMainTarget() const {
    return FRotator{};
}

int32 UFocusAbilityBase::GetRequiredItemQuantity() const {
    return 0;
}

FItemHandle UFocusAbilityBase::GetRequiredItemForTarget(AActor* AbilityOwner, const AActor* Target, int32 Level) {
    return FItemHandle{};
}

float UFocusAbilityBase::GetRemainingCooldown(AActor* Instigator, float& RemainingCooldownInSeconds) {
    return 0.0f;
}

FText UFocusAbilityBase::GetName() {
    return FText::GetEmpty();
}

AActor* UFocusAbilityBase::GetMotionWarpingTarget_Implementation() {
    return NULL;
}

float UFocusAbilityBase::GetMontageOffsetForTarget_Implementation(AActor* Player, AActor* Target) {
    return 0.0f;
}

float UFocusAbilityBase::GetMainStatForPreview(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, EFocusAbilityStatType& OutMainStatType, bool bPreviewOnly) {
    return 0.0f;
}

float UFocusAbilityBase::GetMainStat(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, EFocusAbilityStatType& OutMainStatType) {
    return 0.0f;
}

float UFocusAbilityBase::GetMainDamageTotal_Implementation(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel) {
    return 0.0f;
}

FFocusAbilityLevelDefinition UFocusAbilityBase::GetLevelDefinition(const int32 Level) const {
    return FFocusAbilityLevelDefinition{};
}

bool UFocusAbilityBase::GetInstantCastNoPlayerMontage() const {
    return false;
}

TSoftObjectPtr<UPaperSprite> UFocusAbilityBase::GetIconSprite() const {
    return NULL;
}

UTexture2D* UFocusAbilityBase::GetIcon() const {
    return NULL;
}

float UFocusAbilityBase::GetHealthPercentageCost(UAbilitySystemComponent* AbilitySystem, bool bPreviewModeOnly) {
    return 0.0f;
}

float UFocusAbilityBase::GetHealthCost(UAbilitySystemComponent* AbilitySystem, bool bPreviewModeOnly) {
    return 0.0f;
}

float UFocusAbilityBase::GetHealInterval_Implementation(int32 AbilityLevel) {
    return 0.0f;
}

FText UFocusAbilityBase::GetFunctionalDescription(AActor* AbilityOwner, int32 Level) {
    return FText::GetEmpty();
}

EFocusAbilityType UFocusAbilityBase::GetFocusAbilityType() const {
    return EFocusAbilityType::None;
}

float UFocusAbilityBase::GetEffectValueToApply(float BaseEffectValue, AActor* Instigator, AActor* Target) {
    return 0.0f;
}

float UFocusAbilityBase::GetEffectApplyChanceValue_Implementation(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Instigator, const AActor* Target) {
    return 0.0f;
}

FFocusAbilityLevelDefinition UFocusAbilityBase::GetCurrentLevelDefinition(UAbilitySystemComponent* AbilitySystem) const {
    return FFocusAbilityLevelDefinition{};
}

int32 UFocusAbilityBase::GetCostInChargeSlots(AActor* AbilityOwner, AActor* Target, int32 Level) const {
    return 0;
}

float UFocusAbilityBase::GetCooldownFinalValueForDisplay(const float BaseCooldown, AActor* Instigator) {
    return 0.0f;
}

float UFocusAbilityBase::GetCalculatedIncomingDamageOfflineForEffect(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, TSubclassOf<UGameplayEffect> DamageEffectClass, float SummarizedDamageMultiplier, bool TrueDamage) {
    return 0.0f;
}

float UFocusAbilityBase::GetCalculatedIncomingDamageOffline(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel, bool TrueDamage) {
    return 0.0f;
}

float UFocusAbilityBase::GetAlternativeStatValue_Implementation(UAbilitySystemComponent* TargetAscComponent, AActor* PlayerActor, int32 AbilityLevel) {
    return 0.0f;
}

void UFocusAbilityBase::GetAllRequiredItems(AActor* AbilityOwner, int32 Level, TMap<FItemHandle, int32>& OutItems) const {
}

float UFocusAbilityBase::GetActualEffectApplyChance(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Insigator, const AActor* Target) {
    return 0.0f;
}

UClass* UFocusAbilityBase::GetAbilityToActivateClass_Implementation(const AActor* Target) {
    return NULL;
}

int32 UFocusAbilityBase::GetAbilityLevelFromSpecByASC(UAbilitySystemComponent* OwnerASC) const {
    return 0;
}

int32 UFocusAbilityBase::GetAbilityLevelFromSpec(AActor* AbilityOwner) const {
    return 0;
}

FActiveAbilityTag UFocusAbilityBase::GetAbilityIdentificationTag() const {
    return FActiveAbilityTag{};
}

bool UFocusAbilityBase::FilterTargets_Implementation(TArray<AActor*>& ActorsInRange, AActor* Instigator, AActor* FocusTarget) {
    return false;
}

void UFocusAbilityBase::CollectEffectsUIData(TArray<FEffectUIData>& OutEffectsData, TArray<FEffectUIData>& OutEffectsNotAppliedData, AActor* Instigator, AActor* TargetActor, int32 Level) {
}

bool UFocusAbilityBase::CheckCustomCondition_Implementation(const FFocusAbilityGameplayEffect& FocusAbilityGameplayEffect, const AActor* Target) {
    return false;
}

bool UFocusAbilityBase::CanDieFactCondition(const AActor* TargetActor) {
    return false;
}

bool UFocusAbilityBase::CanBindToQuickslot() const {
    return false;
}

bool UFocusAbilityBase::CanBeActivated(AActor* Instigator, AActor* Target, EAbilityActivationOutcome& AbilityActivationOutcome, EAbilityCostOutcomeMask& AbilityCostOutcomeMask) {
    return false;
}

void UFocusAbilityBase::ApplyEffectsAndPlayReaction(FGameplayAbilityTargetDataHandle& TargetData) {
}

bool UFocusAbilityBase::ActorHasGameplayEffectWithTag(const AActor* Actor, const FGameplayTag& Tag) const {
    return false;
}

void UFocusAbilityBase::AbortActionPoint(AActor* TargetActor) {
}


