#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CharacterDevelopmentPawn.h"
#include "AttackData.h"
#include "CombatComponentGetterInterface.h"
#include "PlayerCombatComponentProvider.h"
#include "SheathedWeaponHolder.h"
#include "DebugCheatProvider.h"
#include "EEquipmentSlotType.h"
#include "ItemHandle.h"
#include "TorchUser.h"
#include "CharacterReactionDialoguePlayer.h"
#include "CharacterStateProvider.h"
#include "CharacterVampireStateProvider.h"
#include "EVampireHunger.h"
#include "FocusModeInterface.h"
#include "Engine/HitResult.h"
#include "RebelPreTeleportHandlerInterface.h"
#include "BloodDrinkingDelegateDelegate.h"
#include "CinematicModeDelegateDelegate.h"
#include "DawnwalkerAudioBoneVelocities.h"
#include "DawnwalkerBuffContainerProvider.h"
#include "DawnwalkerInventoryProvider.h"
#include "DawnwalkerWorldBorderProvider.h"
#include "DawnwalkerWoundContainerProvider.h"
#include "ECheatKillEnemiesType.h"
#include "EPlayerFormSelectionPolicy.h"
#include "EPlayerFormState.h"
#include "FocusModeDelegateDelegate.h"
#include "HumanoidCharacter.h"
#include "OnAttributeChangedSignatureDelegate.h"
#include "OnDrinkButtonPressedChangedDelegate.h"
#include "OnFormChangedDelegateDelegate.h"
#include "OnOutOfWorldBoundsDelegateDelegate.h"
#include "OnPlayerDiedDelegate.h"
#include "OnPlayerResurrectedDelegate.h"
#include "OnToggleControlsLegendInputTagChangedDelegate.h"
#include "OnTorchRemainingTimeChangedDelegate.h"
#include "TempAudioRelatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "TorchStateDelegateDelegate.h"
#include "DawnwalkerPlayerCharacter.generated.h"

class AActor;
class ATowerTipActor;
class AWeaponBase;
class UActorComponent;
class UAnimMontage;
class UAppearanceBase;
class UAudioCharacterEnvironmentComponent;
class UAudioPlayerCombatComponent;
class UBloodBarComponent;
class UBuffContainerComponent;
class UCameraShakeSourceComponent;
class UCharDevAttributeSet;
class UCinematicDialogue;
class UCombatComponentBase;
class UCombatFocusComponent;
class UDWCharacterAntiGravComponent;
class UDWCharacterClawRideComponent;
class UDWCharacterShadowstepComponent;
class UDWPlayerTraversalComponent;
class UFallDamageComponent;
class UGameplayWidgetComponent;
class UInventoryComponent;
class UPlayerBlackBox;
class UPlayerCombatComponent;
class UPlayerDeathAnimationLoader;
class UPlayerInteractableActivatorComponent;
class UPlayerMovementAttributeSet;
class UPopulationSystemInterface;
class UPrimitiveComponent;
class URebelAudioPersistencyComponent;
class URebelCameraComponent;
class USkeletalMeshComponent;
class USphereComponent;
class UStaticMeshComponent;
class USynchronisedAnimationComponent;
class UTraitAsset;
class UVampireAttributeSet;
class UWorldPartitionStreamingSourceComponent;

UCLASS(Blueprintable)
class DAWNWALKER_API ADawnwalkerPlayerCharacter : public AHumanoidCharacter, public ISheathedWeaponHolder, public IPlayerCombatComponentProvider, public IDawnwalkerInventoryProvider, public IDawnwalkerWoundContainerProvider, public IDawnwalkerBuffContainerProvider, public IDawnwalkerAudioBoneVelocities, public IDebugCheatProvider, public ICharacterVampireStateProvider, public ICombatComponentGetterInterface, public ICharacterReactionDialoguePlayer, public ICharacterDevelopmentPawn, public ICharacterStateProvider, public IFocusModeInterface, public ITorchUser, public IDawnwalkerWorldBorderProvider, public IRebelPreTeleportHandlerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelCameraComponent* FollowCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraShakeSourceComponent* CameraShakeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerInteractableActivatorComponent* InteractableActivator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWPlayerTraversalComponent* TraversalComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWCharacterClawRideComponent* ClawRideComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWCharacterShadowstepComponent* ShadowstepComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDWCharacterAntiGravComponent* AntiGravComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCombatComponent* CombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatFocusComponent* CombatFocusComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFallDamageComponent* FallDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBuffContainerComponent* BuffContainerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SheathedWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ScabbardMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* HeadHitboxForCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerMovementAttributeSet* MovementAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBloodBarComponent* BloodBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVampireAttributeSet* VampireAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCharDevAttributeSet* CharDevAttributeSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USynchronisedAnimationComponent* SynchronisedAnimationComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWorldPartitionStreamingSourceComponent* StreamingSourceComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInFocusMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusModeSourceLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocusModeActiveRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerFormSelectionPolicy FormSelectionPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayerFormState Form;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloodDrinkingDelegate OnBloodDrinkingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBloodDrinkingDelegate OnBloodDrinkingEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusModeDelegate OnFocusModeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFocusModeDelegate OnFocusModeEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTorchRemainingTimeChanged OnTorchRemainingTimeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTorchStateDelegate OnTorchStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicModeDelegate OnCinematicModeStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCinematicModeDelegate OnCinematicModeEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOutOfWorldBoundsDelegate OnOutOfWorldBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> HumanHandToHandWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> HumanFistFightModeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> VampireHandToHandWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAppearanceBase* DefaultAppearance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayWidgetComponent* CombatTargetIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayWidgetComponent* CombatOpponentBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayWidgetComponent* CombatHelperBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayWidgetComponent* CombatHelperIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayWidgetComponent* AttackWarningIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AWeaponBase> VampireFistFightModeWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioCharacterEnvironmentComponent* AudioCharacterEnvironmentComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioPlayerCombatComponent* AudioPlayerCombatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URebelAudioPersistencyComponent* AudioPersistencyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CombatIndicatorSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SheathedWeaponSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ScabbardSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName HeadSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform SheathedWeaponRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform ScabbardRelativeTransform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* ReactionDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DeathMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPlayerDeathAnimationLoader* DeathAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* FastTravelSkeletal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SavedMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerBlackBox* BlackBox;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleControlsLegendInputTagChanged OnToggleControlsLegendInputTagChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFormChangedDelegate OnFormChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature OnBloodChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChangedSignature ChargedActionSlotsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDied OnPlayerDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerResurrected OnPlayerResurrected;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPopulationSystemInterface* PopulationSystem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDrinkButtonPressedChanged OnDrinkButtonPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDrinkButtonPressedChanged OnDrinkButtonReleased;
    
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTempAudioRelatedDelegate OnNpcFinisherExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTempAudioRelatedDelegate OnFinisherWhooshExecuted;
    
public:
    ADawnwalkerPlayerCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UpdateHelperAttackIndicator();
    
    UFUNCTION(BlueprintCallable)
    void UpdateCombatIndicator() const;
    
    UFUNCTION(BlueprintCallable)
    void UpdateAttackWarning(bool bWarningStarted, FName WeaponAttachSocket);
    
public:
    UFUNCTION(BlueprintCallable)
    void TriggerNpcFinisherDelegate();
    
    UFUNCTION(BlueprintCallable)
    void TriggerFinisherWhooshDelegate();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleShowOnlyMiddleTargetIndicator();
    
private:
    UFUNCTION(BlueprintCallable)
    void StartMakingPeriodicAINoise();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ShowViewedHittableEnemyBar();
    
    UFUNCTION(BlueprintCallable)
    void ShowHelperAttackIndicator(const FAttackData& AttackData);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFormSelectionPolicy(EPlayerFormSelectionPolicy Value);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveTower(ATowerTipActor* InTower);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetBloodSegmentsOnNightStartBp();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeakspotExploited(UCombatComponentBase* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnVampireUrgeForced(bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void OnVampireHungerLevelChanged(EVampireHunger VampireHungerLevel);
    
    UFUNCTION(BlueprintCallable)
    void OnTraitUnlocked(const UTraitAsset* Trait);
    
    UFUNCTION(BlueprintCallable)
    void OnTraitsReset();
    
    UFUNCTION(BlueprintCallable)
    void OnTraitBought(const UTraitAsset* Trait);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerParriedAttack(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished(UAnimMontage* Montage, bool bInterrupted);
    
    UFUNCTION(BlueprintCallable)
    void OnLevelUp(int32 TraitPointsGained);
    
    UFUNCTION(BlueprintCallable)
    void OnItemAdded(const FItemHandle& NewItem, const int32 Amount);
    
    UFUNCTION(BlueprintCallable)
    void OnInventorySold(const FItemHandle& NewItem, const UInventoryComponent* DestinationInventory);
    
    UFUNCTION(BlueprintCallable)
    void OnHelperAttackFinished(const FAttackData& AttackData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusSphereStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusSphereEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusModeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFocusModeEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEquipmentInSlotChanged(EEquipmentSlotType EquipmentSlot, const FItemHandle& PreviousItem, const FItemHandle& NewItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnemyAttack(UCombatComponentBase* Attacker, bool bAttackActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDrinkBloodSubsystemBloodDrinkingStopped(AActor* InActor);
    
    UFUNCTION(BlueprintCallable)
    void OnDrinkBloodSubsystemBloodDrinkingStarted(AActor* InActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCrouch(bool bValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatModeChanged();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClawRideStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClawRideEnd();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeBecomingVampire();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeforeBecomingHuman();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnActiveAbilityChanged(int32 EquipedPassiveAbilities, int32 TotalEquipedAbilities);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MitigateWounds() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void LinkControlRigAnimLayer();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void KillEnemies(ECheatKillEnemiesType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVampire() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInWolfForm() const;
    
    UFUNCTION(BlueprintCallable)
    void InputTraversalAbility(bool bInActive);
    
    UFUNCTION(BlueprintCallable)
    void InputInteraction(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void InputDrinkBlood(bool bInActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HideViewedHittableEnemyBar();
    
    UFUNCTION(BlueprintCallable)
    void HideHelperAttackIndicator();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void HealWounds() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    bool GetShowOnlyMiddleTargetIndicator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATowerTipActor* GetActiveTower() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EndFocusMode() const;
    
    UFUNCTION(BlueprintCallable)
    void EndAntiGrav();
    
protected:
    UFUNCTION(BlueprintCallable)
    void EnableHardLockOnTarget(bool bEnable);
    
public:
    UFUNCTION(BlueprintCallable)
    void CancelVampireTraversalAbilitiesImmediately();
    
    UFUNCTION(BlueprintCallable)
    void CancelAbilitiesDisabledInCombat(UActorComponent* Component, bool bBReset);
    
    UFUNCTION(BlueprintCallable)
    void CallOnFocusModeStarted();
    
    UFUNCTION(BlueprintCallable)
    void CallOnFocusModeEnded();
    
    UFUNCTION(BlueprintCallable)
    void CallOnCinematicModeStarted();
    
    UFUNCTION(BlueprintCallable)
    void CallOnCinematicModeEnded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BindMontageDelegates();
    
    UFUNCTION(BlueprintCallable)
    void AddHelperLookAtTarget(UCombatComponentBase* TargetCC);
    
    UFUNCTION(BlueprintCallable)
    void ActivateCombatIndicator(UCombatComponentBase* InTarget);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateAntiGravWallStepAbility();
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    FVector GetFocusModeSourceLocation() const override PURE_VIRTUAL(GetFocusModeSourceLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    float GetFocusModeActiveRange() const override PURE_VIRTUAL(GetFocusModeActiveRange, return 0.0f;);
    
};

