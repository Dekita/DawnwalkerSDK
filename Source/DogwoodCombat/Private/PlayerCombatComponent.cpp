#include "PlayerCombatComponent.h"

UPlayerCombatComponent::UPlayerCombatComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->OmniBlockAction = NULL;
    this->bCameraDetachedFromTarget = false;
    this->CurrentLockTarget = NULL;
    this->CurrentViewedHittableTarget = NULL;
    this->CurrentCombatMode = ECombatModeType::None;
    this->bHardLockOnTarget = false;
    this->AttackEffect = NULL;
    this->CriticalAttackEffect = NULL;
    this->JumpAttackEffect = NULL;
    this->RiposteAttackEffect = NULL;
    this->TakeHitEffect = NULL;
    this->BlockEffect = NULL;
    this->ParryEffect = NULL;
    this->OmniBlockEffect = NULL;
    this->TakeCustomStunEffect = NULL;
    this->FocusConfig = NULL;
    this->LastReceivedAttack = NULL;
}

void UPlayerCombatComponent::UpdateCombatMode(UCombatComponentBase* InTarget) {
}

bool UPlayerCombatComponent::TryQueueComboAttack(FGameplayTagContainer AdditionalTags) {
    return false;
}

void UPlayerCombatComponent::ToggleWeaponDrawn() {
}

void UPlayerCombatComponent::ToggleSwordfight() {
}

void UPlayerCombatComponent::ToggleHandToHand() {
}

void UPlayerCombatComponent::ToggleActiveWeapon() {
}

bool UPlayerCombatComponent::SwitchLockTarget(ETargetChangeDirection Direction, float TargetingRange, const bool bUserInput, const bool bMouseInput, bool bAllowActorsBehindTarget, bool bPrioritiseClosest, const bool bSwitchHardLockMouseInput) {
    return false;
}

bool UPlayerCombatComponent::ShouldAutoSelectBlockDirection() const {
    return false;
}

void UPlayerCombatComponent::ShakeCamera() {
}

void UPlayerCombatComponent::SetLockTarget(UCombatComponentBase* InTarget) {
}

void UPlayerCombatComponent::SetHardLock(bool Block) {
}

void UPlayerCombatComponent::SetBlockingDirection(EBlockingDirection InBlockingDirection) {
}

void UPlayerCombatComponent::ResetHitCounter() const {
}

void UPlayerCombatComponent::RegainTargetLock() {
}

bool UPlayerCombatComponent::QueueAttack(FGameplayTagContainer AdditionalTags) {
    return false;
}

void UPlayerCombatComponent::OnVampireTagChanged(FGameplayTag GameplayTag, int32 Count) {
}

void UPlayerCombatComponent::OnTutorialInputTagChanged(FGameplayTag GameplayTag, int32 Count) const {
}

void UPlayerCombatComponent::OnRightMovementAction(float InputValue) {
}

void UPlayerCombatComponent::OnPreCharacterDeath(UCombatComponentBase* Victim, UCombatComponentBase* Killer) {
}

void UPlayerCombatComponent::OnInCombatTagChanged(const FGameplayTag ChangedTag, int32 Count) {
}

void UPlayerCombatComponent::OnForwardMovementAction(float InputValue) {
}

void UPlayerCombatComponent::OnDodge(const FGameplayTag& DodgeTag) {
}

void UPlayerCombatComponent::OnCombatStarted() {
}

void UPlayerCombatComponent::OnCombatEnded() {
}

void UPlayerCombatComponent::OnCinematicStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept) {
}

void UPlayerCombatComponent::OnCinematicFinished() {
}

void UPlayerCombatComponent::OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer) {
}

void UPlayerCombatComponent::OnBlockCameraDetach(FGameplayTag GameplayTag, int32 Count) {
}

void UPlayerCombatComponent::LoseTargetLock(UCombatComponentBase* Instigator, float Time) {
}

bool UPlayerCombatComponent::IsPerformingComboEnderAttack() const {
    return false;
}

bool UPlayerCombatComponent::IsPerformingComboAttack() const {
    return false;
}

bool UPlayerCombatComponent::IsHardLocked() const {
    return false;
}

bool UPlayerCombatComponent::IsDuringFinisher() {
    return false;
}

bool UPlayerCombatComponent::IsDuringActiveAbility() const {
    return false;
}

bool UPlayerCombatComponent::IsAttackQueued() const {
    return false;
}

int32 UPlayerCombatComponent::GetNumberOfEnemies() {
    return 0;
}

FGameplayTag UPlayerCombatComponent::GetLockTargetAttackDirectionTag() const {
    return FGameplayTag{};
}

FGameplayTag UPlayerCombatComponent::GetDirectionRequiredForCombo() {
    return FGameplayTag{};
}

void UPlayerCombatComponent::GainActionSlotsFromOtherNPCsDefence(bool bWasParrySuccessful, float Multiplier) {
}

void UPlayerCombatComponent::GainActionSlotsFromOtherNPCsAttack(float Multiplier) {
}

void UPlayerCombatComponent::GainActionSlotsForHeal(float HealGain) {
}

void UPlayerCombatComponent::EnemyAttackWarning(UCombatComponentBase* Enemy, bool bWarningStarted, FName WeaponAttachSocket) const {
}

void UPlayerCombatComponent::DequeueAndPerformAttack() {
}

void UPlayerCombatComponent::DebugResurrect() {
}

void UPlayerCombatComponent::DeactivateWhenAllowed(ECombatState PreviousState) {
}

void UPlayerCombatComponent::DeactivateIfAllowed() {
}

void UPlayerCombatComponent::ClearLockTarget(const bool bUserInput) {
}

bool UPlayerCombatComponent::CanQueueAttack() const {
    return false;
}

void UPlayerCombatComponent::AttachCameraAndSetNextTarget() {
}


