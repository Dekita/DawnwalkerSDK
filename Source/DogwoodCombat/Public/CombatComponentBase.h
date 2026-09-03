#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EEquipmentSlotType.h"
#include "ItemHandle.h"
#include "Components/ActorComponent.h"
#include "AlphaBlend.h"
#include "Engine/HitResult.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "RebelCollisionDetectorInterface.h"
#include "AttackData.h"
#include "CombatNotifyData.h"
#include "EBlockingDirection.h"
#include "ECombatState.h"
#include "EDefenseType.h"
#include "EWeaponAnimationType.h"
#include "EWeaponSlot.h"
#include "EWeaponSwingDirection.h"
#include "OnAnimationsChangedDelegate.h"
#include "OnAttackImpactDelegateDelegate.h"
#include "OnAttackWarningDelegateDelegate.h"
#include "OnBlockingDirectionChangedDelegate.h"
#include "OnDamageReflectedNotifyDelegate.h"
#include "OnFatiguedStateChangedDelegateDelegate.h"
#include "OnForcedFistFightChangedDelegateDelegate.h"
#include "OnHitReceivedDelegate.h"
#include "OnKillMeNotifyDelegate.h"
#include "OnOpponentStunnedDelegateDelegate.h"
#include "OnStateChangedDelegateDelegate.h"
#include "OnStunAttackReceivedDelegateDelegate.h"
#include "OnTargetedStateChangedDelegateDelegate.h"
#include "OnTicketStateChangedDelegate.h"
#include "OnUpperBodyFreezeUpdatedDelegate.h"
#include "PerformAttackDynamicDelegateDelegate.h"
#include "SingleHitNotifyData.h"
#include "SlidingConfig.h"
#include "Templates/SubclassOf.h"
#include "CombatComponentBase.generated.h"

class AActor;
class ACharacter;
class AController;
class AWeaponBase;
class ISheathedWeaponHolder;
class USheathedWeaponHolder;
class UAbilitySystemComponent;
class UAnimInstance;
class UAnimMontage;
class UAnimSequenceBase;
class UCapsuleComponent;
class UCombatAction;
class UCombatAnimationConfig;
class UCombatComponentBase;
class UCombatConfig;
class UCombatSubsystem;
class UDataTable;
class UEventBusComponent;
class UFeedbackBehavior;
class UGameplayEffect;
class UInventoryComponent;
class UMeshComponent;
class UMotionWarpingComponent;
class UPrimitiveComponent;
class URebelAIStub;
class UShapeComponent;
class UStaticMesh;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODCOMBAT_API UCombatComponentBase : public UActorComponent, public IRebelCollisionDetectorInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> ComponentActiveGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> AttackTargetFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WarpTargetAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeftFootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RightFootBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TurnInPlaceWeightCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PelvisBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EAxis::Type> PelvisForwardAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftPosePelvisForwardDotRightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAlphaBlendArgs TargetingPauseBlendOutSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOpponentStunnedDelegate OnOpponentStunned;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStateChangedDelegate OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackWarningDelegate OnAttackWarning;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttackImpactDelegate OnAttackImpact;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStunAttackReceivedDelegate OnStunAttackReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTicketStateChanged OnTicketStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnimationsChanged OnAnimationsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKillMeNotify NotifyKilledDuringMontage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDamageReflectedNotify NotifyDamageReflected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetedStateChangedDelegate OnTargetedStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetedStateChangedDelegate OnTargetedByFocusStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpperBodyFreezeUpdated OnUpperBodyFreezeUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBlockingDirectionChanged OnBlockingDirectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFatiguedStateChangedDelegate OnFatiguedStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnForcedFistFightChangedDelegate OnForcedFistFightChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerformAttackDynamicDelegate OnAttackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerformAttackDynamicDelegate OnAttackEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ParentAbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* ParentCapsuleComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* BlockAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* ParryAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat AttackWarningRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TicketsTickInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator AdditiveCharacterRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OnAttackHitEffectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFeedbackBehavior* OnAttackHitEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatComponentBase> LastBlockedEnemy;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponAnimationType, UCombatAnimationConfig*> CombatAnimationConfigs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> CustomBlendTimesMatrix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* CurrentAttacker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCombatComponentBase* CurrentAttackTarget;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UCombatComponentBase>> IncomingAttackQueue;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UCombatComponentBase>> AttackedEnemiesForTicketsDistribution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockingDirection BlockingDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ACharacter> OwnerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UInventoryComponent> OwnerInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UEventBusComponent> OwnerEventBus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMotionWarpingComponent> MotionWarping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackData CurrentAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackData OpponentResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAttackData PerformedAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECombatState CurrentState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefenseAngleDot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> LastPlayedReactionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> LastPlayedActionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> LastPlayedReturnMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UAnimMontage> CustomRecoveryStunMontageToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UCombatSubsystem> CombatSubsystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBlockingDirection, float> BlockingDirectionChangeTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimInstance* CachedAnimInstance;
    
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UMeshComponent>> MeshesHidden;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlidingConfig SlidingConfigDefault;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EWeaponSlot, AWeaponBase*> SpawnedWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<ISheathedWeaponHolder> SheathedWeaponHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* EquippedWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* EquippedWeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* EquippedWeaponOffhandMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UStaticMesh* EquippedScabbardMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* EquippedWeaponOffHand;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHitReceived OnHitReceived;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UShapeComponent*> Hitboxes;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelAIStub* AIStub;
    
    UCombatComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WantsToBlock();
    
    UFUNCTION(BlueprintCallable)
    void UnlockStamina();
    
    UFUNCTION(BlueprintCallable)
    void UnlockHealth();
    
    UFUNCTION(BlueprintCallable)
    void UnblockCombat();
    
    UFUNCTION(BlueprintCallable)
    bool TryActivateDodgeAbility();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnHandToHandWeapons();
    
    UFUNCTION(BlueprintCallable)
    bool SpawnEquippedWeapon(bool bUpdateCombatModeGameplayTag);
    
    UFUNCTION(BlueprintCallable)
    void SetStaminaPercent(const float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetRootMotionScalingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideAnimRootMotion(bool bInOverride, bool bInAllowEarlyBlendOut, float InEarlyBlendOutTime, const FName InForwardMovementCurveName, const FName InRightMovementCurveName, const FName InMovementAlphaCurveName);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthPercent(float InPercent);
    
    UFUNCTION(BlueprintCallable)
    void SetForcedFistfight(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredBlockState(bool bWantsToBlock);
    
    UFUNCTION(BlueprintCallable)
    void SetAnimationConfig(const TMap<EWeaponAnimationType, TSubclassOf<UCombatAnimationConfig>>& Map);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalRootMotionSpeed(const bool bInAddAdditionalRootMotionSpeed, const float InAdditionalRootMotionSpeed, const float InDesiredRootMotionDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalDistanceEnabled(bool bValue);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceDodgeAnimation(UPARAM(Ref) FGameplayTagContainer& QueryTags);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeapons(bool bShouldUpdateAnimLayers);
    
public:
    UFUNCTION(BlueprintCallable)
    void ReactToHit(const FCombatNotifyData& InAnimData, const FAttackData& InAttackData, FAttackData& Response);
    
    UFUNCTION(BlueprintCallable)
    void ReactToCustomStun(UAnimMontage* StunLoopMontage, UAnimMontage* StunEndMontage);
    
    UFUNCTION(BlueprintCallable)
    EDefenseType ReactToCustomHit(FGameplayTagContainer Tags, AActor* Caster, EWeaponSwingDirection HitDirection, bool bIsBlockable, float ParryWindow);
    
    UFUNCTION(BlueprintCallable)
    void PlayReactionMontage(UAnimMontage* ReactionMontage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PlayFaceAnimation(FGameplayTag AnimTag) const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag PlayDodgeAnimation(UPARAM(Ref) FGameplayTagContainer& QueryTags, bool bIgnoreStateTransitionRules);
    
    UFUNCTION(BlueprintCallable)
    void PlayBlockParryReaction(UAnimMontage* ActionMontage, bool bIsParry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefenseType OverrideUnarmedDefenseType(EDefenseType DefenseType, AWeaponBase* EnemyWeapon);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSingleHitAnimNotifyBegin(const FSingleHitNotifyData& Data, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void OnKillMeNotify(bool bKillOutsideOfCombat);
    
    UFUNCTION(BlueprintCallable)
    void OnKillMeDuringFocusAbility(UAnimMontage* Montage, float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUnequipped(EEquipmentSlotType EquipmentSlot, const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnItemEquipped(EEquipmentSlotType EquipmentSlot, const FItemHandle& ItemHandle);
    
    UFUNCTION(BlueprintCallable)
    void OnInventoryContentsChanged();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHitboxOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bBFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnDamageAnimNotify(UAnimSequenceBase* Animation, UCombatAction* DamageAction);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCombatMontageStarted(UAnimMontage* Montage);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCombatAnimNotifyEnd(const FCombatNotifyData& Data, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCombatAnimNotifyBegin(const FCombatNotifyData& Data, UAnimSequenceBase* Animation);
    
    UFUNCTION(BlueprintCallable)
    void LockStamina();
    
    UFUNCTION(BlueprintCallable)
    void LockHealth();
    
    UFUNCTION(BlueprintCallable)
    void Kill();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTaunting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStunned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingLastReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInForcedFistfight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFatigued() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsEnhancedAttackVisualizationEnabled(float& OutEnhancedAttackVisualizationValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDuringCombo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlocking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAdditionalDistanceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLostAllStamina() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasFullStamina() const;
    
    UFUNCTION(BlueprintCallable)
    bool HasEquippedWeapon();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetWeaponSocketNameForSlot(EWeaponSlot InSlot);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatComponentBase* GetTargetedEnemy();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetStaminaPercentage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetSocketNameForSlot(EWeaponSlot InSlot);
    
public:
    UFUNCTION()
    bool GetRootMotionScalingEnabled() const;
    
    UFUNCTION()
    TWeakObjectPtr<AWeaponBase> GetMainWeapon_WeakPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponBase* GetMainWeapon() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHealthPercentage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AWeaponBase> GetEquippedWeapon(EEquipmentSlotType SlotType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDodgeStaminaCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetDodgeDirectionTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDodgeBloodCost() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDefenseType GetDefenseTypeForAttack(const FCombatNotifyData& InAnimData, const FAttackData& InAttackData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AWeaponBase* GetDefendingWeapon(EWeaponSwingDirection Direction) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EWeaponAnimationType GetCurrentWeaponAnimationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECombatState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatAnimationConfig* GetCurrentCombatAnimations() const;
    
    UFUNCTION(BlueprintCallable)
    AWeaponBase* GetCurrentAttackWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatConfig* GetConfig() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCombatForwardDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACharacter* GetCharacter() const;
    
    UFUNCTION()
    UCapsuleComponent* GetCapsuleComponent() const;
    
    UFUNCTION()
    TWeakObjectPtr<UAnimMontage> GetAttackMontageFromTags(UPARAM(Ref) FGameplayTagContainer& QueryTags, const FAttackData& AttackData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanReplaceDodgeAnimation(float MaxAnimStartTime);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerformBlockInDirection(const EBlockingDirection InDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerformAttackInDirection(const EWeaponSwingDirection InDirection) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerformAttack(const bool bEarlyTest) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPerformAnyAction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanEnterState(ECombatState State) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDefend() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void BreakCurrentMontageOut(const FGameplayTag CallbackTag, int32 NewCount);
    
    UFUNCTION(BlueprintCallable)
    bool BreakCurrentMontage(const FGameplayTag CallbackTag, int32 NewCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void BP_ApplyAttackDamage(const FAttackData& InAttack, const FAttackData& InOpponentResponse, AWeaponBase* AttackerWeapon, AWeaponBase* DefenderWeapon);
    
    UFUNCTION(BlueprintCallable)
    void BlockCombat();
    

    // Fix for true pure virtual functions not being implemented
};

