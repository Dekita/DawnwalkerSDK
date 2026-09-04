#include "CombatComponentBase.h"
#include "Templates/SubclassOf.h"

UCombatComponentBase::UCombatComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->AttackTargetFilterClass = NULL;
    this->LeftFootBoneName = TEXT("foot_l");
    this->RightFootBoneName = TEXT("foot_r");
    this->TurnInPlaceWeightCurve = TEXT("RemainingTurnAngleWeight");
    this->PelvisBoneName = TEXT("Pelvis");
    this->PelvisForwardAxis = EAxis::Y;
    this->LeftPosePelvisForwardDotRightMax = -0.50f;
    this->ParentAbilitySystemComponent = NULL;
    this->ParentCapsuleComponent = NULL;
    this->BlockAction = NULL;
    this->ParryAction = NULL;
    this->TicketsTickInterval = 0.25f;
    this->OnAttackHitEffect = NULL;
    this->CurrentAttacker = NULL;
    this->CurrentAttackTarget = NULL;
    this->BlockingDirection = EBlockingDirection::None;
    this->Config = NULL;
    this->CurrentState = ECombatState::Idle;
    this->DefenseAngleDot = 0.00f;
    this->CachedAnimInstance = NULL;
    this->EquippedWeapon = NULL;
    this->EquippedWeaponMesh = NULL;
    this->EquippedWeaponOffhandMesh = NULL;
    this->EquippedScabbardMesh = NULL;
    this->EquippedWeaponOffHand = NULL;
    this->AIStub = NULL;
}

bool UCombatComponentBase::WantsToBlock() {
    return false;
}

void UCombatComponentBase::UnlockStamina() {
}

void UCombatComponentBase::UnlockHealth() {
}

void UCombatComponentBase::UnblockCombat() {
}

bool UCombatComponentBase::TryActivateDodgeAbility() {
    return false;
}

bool UCombatComponentBase::SpawnHandToHandWeapons() {
    return false;
}

bool UCombatComponentBase::SpawnEquippedWeapon(bool bUpdateCombatModeGameplayTag) {
    return false;
}

void UCombatComponentBase::SetStaminaPercent(const float InPercent) {
}

void UCombatComponentBase::SetRootMotionScalingEnabled(bool bEnabled) {
}

void UCombatComponentBase::SetOverrideAnimRootMotion(bool bInOverride, bool bInAllowEarlyBlendOut, float InEarlyBlendOutTime, const FName InForwardMovementCurveName, const FName InRightMovementCurveName, const FName InMovementAlphaCurveName) {
}

void UCombatComponentBase::SetHealthPercent(float InPercent) {
}

void UCombatComponentBase::SetForcedFistfight(bool bEnabled) {
}

void UCombatComponentBase::SetDesiredBlockState(bool bWantsToBlock) {
}

void UCombatComponentBase::SetAnimationConfig(const TMap<EWeaponAnimationType, TSubclassOf<UCombatAnimationConfig>>& Map) {
}

void UCombatComponentBase::SetAdditionalRootMotionSpeed(const bool bInAddAdditionalRootMotionSpeed, const float InAdditionalRootMotionSpeed, const float InDesiredRootMotionDistance) {
}

void UCombatComponentBase::SetAdditionalDistanceEnabled(bool bValue) {
}

void UCombatComponentBase::ReplaceDodgeAnimation(FGameplayTagContainer& QueryTags) {
}

void UCombatComponentBase::RemoveAllWeapons(bool bShouldUpdateAnimLayers) {
}

void UCombatComponentBase::ReactToHit(const FCombatNotifyData& InAnimData, const FAttackData& InAttackData, FAttackData& Response) {
}

void UCombatComponentBase::ReactToCustomStun(UAnimMontage* StunLoopMontage, UAnimMontage* StunEndMontage) {
}

EDefenseType UCombatComponentBase::ReactToCustomHit(FGameplayTagContainer Tags, AActor* Caster, EWeaponSwingDirection HitDirection, bool bIsBlockable, float ParryWindow) {
    return EDefenseType::None;
}

void UCombatComponentBase::PlayReactionMontage(UAnimMontage* ReactionMontage) {
}

void UCombatComponentBase::PlayFaceAnimation(FGameplayTag AnimTag) const {
}

FGameplayTag UCombatComponentBase::PlayDodgeAnimation(FGameplayTagContainer& QueryTags, bool bIgnoreStateTransitionRules) {
    return FGameplayTag{};
}

void UCombatComponentBase::PlayBlockParryReaction(UAnimMontage* ActionMontage, bool bIsParry) {
}

EDefenseType UCombatComponentBase::OverrideUnarmedDefenseType(EDefenseType DefenseType, AWeaponBase* EnemyWeapon) {
    return EDefenseType::None;
}

void UCombatComponentBase::OnSingleHitAnimNotifyBegin_Implementation(const FSingleHitNotifyData& Data, UAnimSequenceBase* Animation) {
}

void UCombatComponentBase::OnKillMeNotify(bool bKillOutsideOfCombat) {
}

void UCombatComponentBase::OnKillMeDuringFocusAbility(UAnimMontage* Montage, float StartTime) {
}

void UCombatComponentBase::OnItemUnequipped(EEquipmentSlotType EquipmentSlot, const FItemHandle& ItemHandle) {
}

void UCombatComponentBase::OnItemEquipped(EEquipmentSlotType EquipmentSlot, const FItemHandle& ItemHandle) {
}

void UCombatComponentBase::OnInventoryContentsChanged() {
}

void UCombatComponentBase::OnHitboxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult) {
}

void UCombatComponentBase::OnDamageAnimNotify(UAnimSequenceBase* Animation, UCombatAction* DamageAction) {
}

void UCombatComponentBase::OnCombatMontageStarted(UAnimMontage* Montage) {
}

void UCombatComponentBase::OnCombatMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

void UCombatComponentBase::OnCombatAnimNotifyEnd_Implementation(const FCombatNotifyData& Data, UAnimSequenceBase* Animation) {
}

void UCombatComponentBase::OnCombatAnimNotifyBegin_Implementation(const FCombatNotifyData& Data, UAnimSequenceBase* Animation) {
}

void UCombatComponentBase::LockStamina() {
}

void UCombatComponentBase::LockHealth() {
}

void UCombatComponentBase::Kill() {
}

bool UCombatComponentBase::IsTaunting() const {
    return false;
}

bool UCombatComponentBase::IsStunned() const {
    return false;
}

bool UCombatComponentBase::IsPlayingLastReaction() const {
    return false;
}

bool UCombatComponentBase::IsInForcedFistfight() const {
    return false;
}

bool UCombatComponentBase::IsFatigued() const {
    return false;
}

bool UCombatComponentBase::IsEnhancedAttackVisualizationEnabled(float& OutEnhancedAttackVisualizationValue) {
    return false;
}

bool UCombatComponentBase::IsDuringCombo() const {
    return false;
}

bool UCombatComponentBase::IsBlocking() const {
    return false;
}

bool UCombatComponentBase::IsAlive() const {
    return false;
}

bool UCombatComponentBase::IsAdditionalDistanceEnabled() const {
    return false;
}

bool UCombatComponentBase::HasLostAllStamina() const {
    return false;
}

bool UCombatComponentBase::HasFullStamina() const {
    return false;
}

bool UCombatComponentBase::HasEquippedWeapon() {
    return false;
}

FName UCombatComponentBase::GetWeaponSocketNameForSlot(EWeaponSlot InSlot) {
    return NAME_None;
}

UCombatComponentBase* UCombatComponentBase::GetTargetedEnemy() {
    return NULL;
}

float UCombatComponentBase::GetStaminaPercentage() {
    return 0.0f;
}

FName UCombatComponentBase::GetSocketNameForSlot_Implementation(EWeaponSlot InSlot) {
    return NAME_None;
}

bool UCombatComponentBase::GetRootMotionScalingEnabled() const {
    return false;
}

TWeakObjectPtr<AWeaponBase> UCombatComponentBase::GetMainWeapon_WeakPtr() const {
    return NULL;
}

AWeaponBase* UCombatComponentBase::GetMainWeapon() const {
    return NULL;
}

float UCombatComponentBase::GetHealthPercentage() {
    return 0.0f;
}

TSubclassOf<AWeaponBase> UCombatComponentBase::GetEquippedWeapon(EEquipmentSlotType SlotType) const {
    return NULL;
}

float UCombatComponentBase::GetDodgeStaminaCost() const {
    return 0.0f;
}

FGameplayTag UCombatComponentBase::GetDodgeDirectionTag() const {
    return FGameplayTag{};
}

float UCombatComponentBase::GetDodgeBloodCost() const {
    return 0.0f;
}

EDefenseType UCombatComponentBase::GetDefenseTypeForAttack(const FCombatNotifyData& InAnimData, const FAttackData& InAttackData) const {
    return EDefenseType::None;
}

AWeaponBase* UCombatComponentBase::GetDefendingWeapon(EWeaponSwingDirection Direction) const {
    return NULL;
}

EWeaponAnimationType UCombatComponentBase::GetCurrentWeaponAnimationType() const {
    return EWeaponAnimationType::FistFightMode;
}

ECombatState UCombatComponentBase::GetCurrentState() const {
    return ECombatState::Idle;
}

UCombatAnimationConfig* UCombatComponentBase::GetCurrentCombatAnimations() const {
    return NULL;
}

AWeaponBase* UCombatComponentBase::GetCurrentAttackWeapon() {
    return NULL;
}

UCombatConfig* UCombatComponentBase::GetConfig() const {
    return NULL;
}

FVector UCombatComponentBase::GetCombatForwardDirection() const {
    return FVector{};
}

ACharacter* UCombatComponentBase::GetCharacter() const {
    return NULL;
}

UCapsuleComponent* UCombatComponentBase::GetCapsuleComponent_Implementation() const {
    return NULL;
}

TWeakObjectPtr<UAnimMontage> UCombatComponentBase::GetAttackMontageFromTags(FGameplayTagContainer& QueryTags, const FAttackData& AttackData) {
    return NULL;
}

UAbilitySystemComponent* UCombatComponentBase::GetAbilitySystemComponent_Implementation() const {
    return NULL;
}

bool UCombatComponentBase::CanReplaceDodgeAnimation(float MaxAnimStartTime) {
    return false;
}

bool UCombatComponentBase::CanPerformBlockInDirection(const EBlockingDirection InDirection) const {
    return false;
}

bool UCombatComponentBase::CanPerformAttackInDirection(const EWeaponSwingDirection InDirection) const {
    return false;
}

bool UCombatComponentBase::CanPerformAttack(const bool bEarlyTest) const {
    return false;
}

bool UCombatComponentBase::CanPerformAnyAction() const {
    return false;
}

bool UCombatComponentBase::CanEnterState(ECombatState State) const {
    return false;
}

bool UCombatComponentBase::CanDefend() const {
    return false;
}

void UCombatComponentBase::BreakCurrentMontageOut(const FGameplayTag CallbackTag, int32 NewCount) {
}

bool UCombatComponentBase::BreakCurrentMontage(const FGameplayTag CallbackTag, int32 NewCount) {
    return false;
}

void UCombatComponentBase::BP_ApplyAttackDamage(const FAttackData& InAttack, const FAttackData& InOpponentResponse, AWeaponBase* AttackerWeapon, AWeaponBase* DefenderWeapon) {
}

void UCombatComponentBase::BlockCombat() {
}


