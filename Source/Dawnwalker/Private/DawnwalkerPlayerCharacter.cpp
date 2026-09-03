#include "DawnwalkerPlayerCharacter.h"
#include "SkeletalMeshComponentBudgeted.h"
#include "CombatFocusComponent.h"
#include "PlayerCombatComponent.h"
#include "SynchronisedAnimationComponent.h"
#include "CharDevAttributeSet.h"
#include "PlayerAttributeSet.h"
#include "PlayerMovementAttributeSet.h"
#include "GameplayWidgetComponent.h"
#include "PlayerInteractableActivatorComponent.h"
#include "Camera/CameraShakeSourceComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WorldPartitionStreamingSourceComponent.h"
#include "RebelAudioPersistencyComponent.h"
#include "RebelCameraComponent.h"
#include "AudioCharacterEnvironmentComponent.h"
#include "AudioPlayerCombatComponent.h"
#include "BuffContainerComponent.h"
#include "DWCharacterAntiGravComponent.h"
#include "DWCharacterClawRideComponent.h"
#include "DWCharacterShadowstepComponent.h"
#include "DWPlayerMovementComponent.h"
#include "FallDamageComponent.h"
#include "PlayerBlackBox.h"

ADawnwalkerPlayerCharacter::ADawnwalkerPlayerCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<UDWPlayerMovementComponent>(TEXT("CharMoveComp")).SetDefaultSubobjectClass<UPlayerAttributeSet>(TEXT("CharacterAttributeSet"))) {
    const FProperty* p_CreatureType = GetClass()->FindPropertyByName("CreatureType");
    (*p_CreatureType->ContainerPtrToValuePtr<FName>(this)) = TEXT("Human");
    this->FollowCamera = CreateDefaultSubobject<URebelCameraComponent>(TEXT("FollowCamera"));
    this->CameraShakeSource = CreateDefaultSubobject<UCameraShakeSourceComponent>(TEXT("Camera Shake Source"));
    this->InteractableActivator = CreateDefaultSubobject<UPlayerInteractableActivatorComponent>(TEXT("Interactable Activator Component"));
    this->TraversalComponent = NULL;
    this->ClawRideComponent = CreateDefaultSubobject<UDWCharacterClawRideComponent>(TEXT("Claw Ride Component"));
    this->ShadowstepComponent = CreateDefaultSubobject<UDWCharacterShadowstepComponent>(TEXT("Shadowstep Component"));
    this->AntiGravComponent = CreateDefaultSubobject<UDWCharacterAntiGravComponent>(TEXT("AntiGrav Component"));
    this->CombatComponent = CreateDefaultSubobject<UPlayerCombatComponent>(TEXT("CombatComponent"));
    this->CombatFocusComponent = CreateDefaultSubobject<UCombatFocusComponent>(TEXT("Combat Focus"));
    this->FallDamageComponent = CreateDefaultSubobject<UFallDamageComponent>(TEXT("FallDamageComponent"));
    this->BuffContainerComponent = CreateDefaultSubobject<UBuffContainerComponent>(TEXT("Buff Container Component"));
    this->SheathedWeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Sheathed Weapon"));
    const FProperty* p_Mesh_Parent = GetClass()->FindPropertyByName("Mesh");
    this->ScabbardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Scabbard"));
    this->HeadHitboxForCrouching = CreateDefaultSubobject<USphereComponent>(TEXT("Head Hitbox For Crouching"));
    this->MovementAttributeSet = CreateDefaultSubobject<UPlayerMovementAttributeSet>(TEXT("MovementAttributeSet"));
    this->BloodBar = NULL;
    this->VampireAttributeSet = NULL;
    this->CharDevAttributeSet = CreateDefaultSubobject<UCharDevAttributeSet>(TEXT("CharDevAttributeSet"));
    this->SynchronisedAnimationComponent = CreateDefaultSubobject<USynchronisedAnimationComponent>(TEXT("Synchronised Animation Component"));
    this->StreamingSourceComponent = CreateDefaultSubobject<UWorldPartitionStreamingSourceComponent>(TEXT("Streaming Source Component"));
    this->bIsInFocusMode = false;
    this->FocusModeActiveRange = 0.00f;
    this->FormSelectionPolicy = EPlayerFormSelectionPolicy::BasedOnTimeOfDay;
    this->Form = EPlayerFormState::Human;
    this->HumanHandToHandWeapon = NULL;
    this->HumanFistFightModeWeapon = NULL;
    this->VampireHandToHandWeapon = NULL;
    this->DefaultAppearance = NULL;
    this->CombatTargetIndicator = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("GlobalCombatTargetIndicator"));
    this->CombatOpponentBar = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("GlobalCombatHealthBar"));
    this->CombatHelperBar = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("HelperCombatHealthBar"));
    this->CombatHelperIndicator = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("HelperCombatIndicator"));
    this->AttackWarningIndicator = CreateDefaultSubobject<UGameplayWidgetComponent>(TEXT("GlobalAttackWarningIndicator"));
    this->VampireFistFightModeWeapon = NULL;
    this->AudioCharacterEnvironmentComponent = CreateDefaultSubobject<UAudioCharacterEnvironmentComponent>(TEXT("AudioCharacterEnvironment"));
    this->AudioPlayerCombatComponent = CreateDefaultSubobject<UAudioPlayerCombatComponent>(TEXT("AudioPlayerCombatComponent"));
    this->AudioPersistencyComponent = CreateDefaultSubobject<URebelAudioPersistencyComponent>(TEXT("RebelAudioPersistencyComponent"));
    this->CombatIndicatorSocketName = TEXT("socket_chest");
    this->SheathedWeaponSocketName = TEXT("coen_sword_02");
    this->ScabbardSocketName = TEXT("coen_sword_01");
    this->HeadSocketName = TEXT("Head");
    this->ReactionDialogue = NULL;
    this->DeathMontage = NULL;
    this->DeathAnimations = NULL;
    this->FastTravelSkeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FastTravelSkeletal"));
    this->SavedMesh = NULL;
    this->BlackBox = CreateDefaultSubobject<UPlayerBlackBox>(TEXT("BlackBox"));
    this->PopulationSystem = NULL;
    this->CameraShakeSource->SetupAttachment(RootComponent);
    this->FastTravelSkeletal->SetupAttachment(RootComponent);
    this->FollowCamera->SetupAttachment(RootComponent);
    this->HeadHitboxForCrouching->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
    this->ScabbardMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
    this->SheathedWeaponMesh->SetupAttachment(p_Mesh_Parent->ContainerPtrToValuePtr<USkeletalMeshComponentBudgeted>(this));
}

void ADawnwalkerPlayerCharacter::UpdateHelperAttackIndicator() {
}

void ADawnwalkerPlayerCharacter::UpdateCombatIndicator() const {
}

void ADawnwalkerPlayerCharacter::UpdateAttackWarning(bool bWarningStarted, FName WeaponAttachSocket) {
}

void ADawnwalkerPlayerCharacter::TriggerNpcFinisherDelegate() {
}

void ADawnwalkerPlayerCharacter::TriggerFinisherWhooshDelegate() {
}

void ADawnwalkerPlayerCharacter::ToggleShowOnlyMiddleTargetIndicator() {
}

void ADawnwalkerPlayerCharacter::StartMakingPeriodicAINoise() {
}

void ADawnwalkerPlayerCharacter::ShowViewedHittableEnemyBar() {
}

void ADawnwalkerPlayerCharacter::ShowHelperAttackIndicator(const FAttackData& AttackData) {
}

void ADawnwalkerPlayerCharacter::SetFormSelectionPolicy(EPlayerFormSelectionPolicy Value) {
}

void ADawnwalkerPlayerCharacter::SetActiveTower(ATowerTipActor* InTower) {
}


void ADawnwalkerPlayerCharacter::OnWeakspotExploited(UCombatComponentBase* Target) {
}

void ADawnwalkerPlayerCharacter::OnVampireUrgeForced(bool bForced) {
}

void ADawnwalkerPlayerCharacter::OnVampireHungerLevelChanged(EVampireHunger VampireHungerLevel) {
}

void ADawnwalkerPlayerCharacter::OnTraitUnlocked(const UTraitAsset* Trait) {
}

void ADawnwalkerPlayerCharacter::OnTraitsReset() {
}

void ADawnwalkerPlayerCharacter::OnTraitBought(const UTraitAsset* Trait) {
}

void ADawnwalkerPlayerCharacter::OnPlayerParriedAttack(AActor* Target) {
}

void ADawnwalkerPlayerCharacter::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void ADawnwalkerPlayerCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ADawnwalkerPlayerCharacter::OnMontageStarted(UAnimMontage* Montage) {
}

void ADawnwalkerPlayerCharacter::OnMontageFinished(UAnimMontage* Montage, bool bInterrupted) {
}

void ADawnwalkerPlayerCharacter::OnLevelUp(int32 TraitPointsGained) {
}

void ADawnwalkerPlayerCharacter::OnItemAdded(const FItemHandle& NewItem, const int32 Amount) {
}

void ADawnwalkerPlayerCharacter::OnInventorySold(const FItemHandle& NewItem, const UInventoryComponent* DestinationInventory) {
}

void ADawnwalkerPlayerCharacter::OnHelperAttackFinished(const FAttackData& AttackData) {
}





void ADawnwalkerPlayerCharacter::OnEquipmentInSlotChanged(EEquipmentSlotType EquipmentSlot, const FItemHandle& PreviousItem, const FItemHandle& NewItem) {
}


void ADawnwalkerPlayerCharacter::OnDrinkBloodSubsystemBloodDrinkingStopped(AActor* InActor) {
}

void ADawnwalkerPlayerCharacter::OnDrinkBloodSubsystemBloodDrinkingStarted(AActor* InActor) {
}

void ADawnwalkerPlayerCharacter::OnCrouch_Implementation(bool bValue) {
}

void ADawnwalkerPlayerCharacter::OnCombatModeChanged() {
}



void ADawnwalkerPlayerCharacter::OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer) {
}



void ADawnwalkerPlayerCharacter::OnActiveAbilityChanged(int32 EquipedPassiveAbilities, int32 TotalEquipedAbilities) {
}

void ADawnwalkerPlayerCharacter::MitigateWounds() const {
}

void ADawnwalkerPlayerCharacter::LinkControlRigAnimLayer() {
}

void ADawnwalkerPlayerCharacter::KillEnemies(ECheatKillEnemiesType Type) const {
}

bool ADawnwalkerPlayerCharacter::IsVampire() const {
    return false;
}

bool ADawnwalkerPlayerCharacter::IsInWolfForm() const {
    return false;
}

void ADawnwalkerPlayerCharacter::InputTraversalAbility(bool bInActive) {
}

void ADawnwalkerPlayerCharacter::InputInteraction(bool bValue) {
}

void ADawnwalkerPlayerCharacter::InputDrinkBlood(bool bInActive) {
}

void ADawnwalkerPlayerCharacter::HideViewedHittableEnemyBar() {
}

void ADawnwalkerPlayerCharacter::HideHelperAttackIndicator() {
}

void ADawnwalkerPlayerCharacter::HealWounds() const {
}

bool ADawnwalkerPlayerCharacter::GetShowOnlyMiddleTargetIndicator() {
    return false;
}

ATowerTipActor* ADawnwalkerPlayerCharacter::GetActiveTower() const {
    return NULL;
}

void ADawnwalkerPlayerCharacter::EndFocusMode() const {
}

void ADawnwalkerPlayerCharacter::EndAntiGrav() {
}

void ADawnwalkerPlayerCharacter::EnableHardLockOnTarget(bool bEnable) {
}

void ADawnwalkerPlayerCharacter::CancelVampireTraversalAbilitiesImmediately() {
}

void ADawnwalkerPlayerCharacter::CancelAbilitiesDisabledInCombat(UActorComponent* Component, bool bBReset) {
}

void ADawnwalkerPlayerCharacter::CallOnFocusModeStarted() {
}

void ADawnwalkerPlayerCharacter::CallOnFocusModeEnded() {
}

void ADawnwalkerPlayerCharacter::CallOnCinematicModeStarted() {
}

void ADawnwalkerPlayerCharacter::CallOnCinematicModeEnded() {
}

void ADawnwalkerPlayerCharacter::BindMontageDelegates() {
}

void ADawnwalkerPlayerCharacter::AddHelperLookAtTarget(UCombatComponentBase* TargetCC) {
}

void ADawnwalkerPlayerCharacter::ActivateCombatIndicator(UCombatComponentBase* InTarget) {
}

void ADawnwalkerPlayerCharacter::ActivateAntiGravWallStepAbility() {
}


