#pragma once
#include "CoreMinimal.h"
#include "ETargetChangeDirection.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CombatComponentBase.h"
#include "EBlockingDirection.h"
#include "ECombatModeType.h"
#include "ECombatState.h"
#include "ESpecialAttackType.h"
#include "OnCharacterKilledByPlayerDelegate.h"
#include "OnCinematicFinisherSyncEndedDelegate.h"
#include "OnCinematicFinisherSyncStartedDelegate.h"
#include "OnCombatModeChangedDelegate.h"
#include "OnCurrentlyAttackingHelperRemovedDelegate.h"
#include "OnEnemyAttackDelegate.h"
#include "OnEnemyAttackWarningDelegate.h"
#include "OnHardLockTargetDelegate.h"
#include "OnLockTargetChangedDelegateDelegate.h"
#include "OnParryWindowOpenedDelegate.h"
#include "OnPlayerAppliedBleedingDelegate.h"
#include "OnPlayerBlockedAttackDelegate.h"
#include "OnPlayerDealtCriticalDamageDelegate.h"
#include "OnPlayerLandedSuccessfulAttackDelegate.h"
#include "OnPlayerParriedAttackDelegate.h"
#include "OnPlayerRiposteHitDealtDelegate.h"
#include "OnPlayerWeaponCollidedDelegate.h"
#include "OnTargetWeakspotChangedDelegate.h"
#include "OnWeakspotExploitedDelegate.h"
#include "PlayerCombatComponent.generated.h"

class AActor;
class UCinematicDialogue;
class UCombatAction;
class UDogwoodFocusConfig;
class UFeedbackBehavior;
class UNPCCombatComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODCOMBAT_API UPlayerCombatComponent : public UCombatComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESpecialAttackType, UCombatAction*> SpecialDefenseActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* OmniBlockAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLockTargetChangedDelegate OnLockTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLockTargetChangedDelegate OnFocusOnHelperChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLockTargetChangedDelegate OnViewedHittableTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAttack OnLockTargetStartedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAttack OnLockTargetPerformedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAttack OnHelperStartedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAttack OnHelperPerformedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEnemyAttackWarning OnLockTargetAttackWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetWeakspotChanged OnEnemyWeakspotChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWeakspotExploited OnWeakspotExploited;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnParryWindowOpened OnParryWindowOpened;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicFinisherSyncStarted OnFinisherSyncStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCinematicFinisherSyncEnded OnFinisherSyncEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatModeChanged OnCombatModeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerDealtCriticalDamage OnPlayerDealtCriticalDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerRiposteHitDealt OnPlayerRiposteHitDealt;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLandedSuccessfulAttack OnPlayerLandedSuccessfulAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLandedSuccessfulAttack OnPlayerLandedAttackInRiposteWindow;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerAppliedBleeding OnPlayerAppliedBleeding;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerWeaponCollided OnPlayerWeaponCollidedWithOpponentForAbility;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterKilledByPlayer OnCharacterKilledByPlayer;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerParriedAttack OnPlayerParriedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBlockedAttack OnPlayerBlockedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerBlockedAttack OnPlayerOmniBlockedAttack;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHardLockTarget OnHardLockTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCurrentlyAttackingHelperRemoved OnCurrentlyAttackingHelperRemoved;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> CurrentlyAttackingHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> CurrentlyAttackingEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> OpponentBeingKilledByFinisher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCameraDetachedFromTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* CurrentLockTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* CurrentViewedHittableTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UNPCCombatComponent> MainEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatModeType CurrentCombatMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardLockOnTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttackEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CriticalAttackEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName JumpAttackEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RiposteAttackEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TakeHitEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlockEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParryEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OmniBlockEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TakeCustomStunEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* AttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* CriticalAttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* JumpAttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* RiposteAttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* TakeHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* BlockEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* ParryEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* OmniBlockEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* TakeCustomStunEffect;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCombatComponentBase*> WarnedEnemies;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNPCCombatComponent>> AggressiveTowardsPlayer;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UNPCCombatComponent>> PotentialNewTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> PlayedFinishers;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UCombatComponentBase>, double> CurrentAttacksOnMe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDogwoodFocusConfig* FocusConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* LastReceivedAttack;
    
public:
    UPlayerCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateCombatMode(UCombatComponentBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    bool TryQueueComboAttack(FGameplayTagContainer AdditionalTags);
    
    UFUNCTION(BlueprintCallable)
    void ToggleWeaponDrawn();
    
    UFUNCTION(BlueprintCallable)
    void ToggleSwordfight();
    
    UFUNCTION(BlueprintCallable)
    void ToggleHandToHand();
    
    UFUNCTION(BlueprintCallable)
    void ToggleActiveWeapon();
    
    UFUNCTION(BlueprintCallable)
    bool SwitchLockTarget(ETargetChangeDirection Direction, float TargetingRange, const bool bUserInput, const bool bMouseInput, bool bAllowActorsBehindTarget, bool bPrioritiseClosest, const bool bSwitchHardLockMouseInput);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldAutoSelectBlockDirection() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ShakeCamera();
    
    UFUNCTION(BlueprintCallable)
    void SetLockTarget(UCombatComponentBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetHardLock(bool Block);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetBlockingDirection(EBlockingDirection InBlockingDirection);
    
private:
    UFUNCTION(BlueprintCallable)
    void ResetHitCounter() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void RegainTargetLock();
    
    UFUNCTION(BlueprintCallable)
    bool QueueAttack(FGameplayTagContainer AdditionalTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnVampireTagChanged(FGameplayTag GameplayTag, int32 Count);
    
    UFUNCTION(BlueprintCallable)
    void OnTutorialInputTagChanged(FGameplayTag GameplayTag, int32 Count) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRightMovementAction(float InputValue);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPreCharacterDeath(UCombatComponentBase* Victim, UCombatComponentBase* Killer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInCombatTagChanged(const FGameplayTag ChangedTag, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnForwardMovementAction(float InputValue);
    
    UFUNCTION(BlueprintCallable)
    void OnDodge(const FGameplayTag& DodgeTag);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatEnded();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCinematicStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void OnCinematicFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCharacterDied(UCombatComponentBase* Victim, UCombatComponentBase* Killer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnBlockCameraDetach(FGameplayTag GameplayTag, int32 Count);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoseTargetLock(UCombatComponentBase* Instigator, float Time);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformingComboEnderAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPerformingComboAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHardLocked() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsDuringFinisher();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringActiveAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackQueued() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumberOfEnemies();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetLockTargetAttackDirectionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDirectionRequiredForCombo();
    
    UFUNCTION(BlueprintCallable)
    void GainActionSlotsFromOtherNPCsDefence(bool bWasParrySuccessful, float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void GainActionSlotsFromOtherNPCsAttack(float Multiplier);
    
    UFUNCTION(BlueprintCallable)
    void GainActionSlotsForHeal(float HealGain);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void EnemyAttackWarning(UCombatComponentBase* Enemy, bool bWarningStarted, FName WeaponAttachSocket) const;
    
    UFUNCTION(BlueprintCallable)
    void DequeueAndPerformAttack();
    
    UFUNCTION(BlueprintCallable)
    void DebugResurrect();
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateWhenAllowed(ECombatState PreviousState);
    
    UFUNCTION(BlueprintCallable)
    void DeactivateIfAllowed();
    
    UFUNCTION(BlueprintCallable)
    void ClearLockTarget(const bool bUserInput);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanQueueAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void AttachCameraAndSetNextTarget();
    
};

