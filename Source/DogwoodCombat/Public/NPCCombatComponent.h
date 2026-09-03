#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "GuardAreaReceiver.h"
#include "RebelAIEvent.h"
#include "RebelAI_AttackHit_Payload.h"
#include "CombatComponentBase.h"
#include "CombatNotifyData.h"
#include "EBlockingDirection.h"
#include "ECharacterAttitude.h"
#include "ECombatState.h"
#include "OnAttitudeChangedDelegateDelegate.h"
#include "OnTargetEscapedDelegateDelegate.h"
#include "StunAttackData.h"
#include "NPCCombatComponent.generated.h"

class APawn;
class AWeaponBase;
class IGuardAreaInterface;
class UGuardAreaInterface;
class UAnimMontage;
class UBehaviorTree;
class UCombatAction;
class UEnemyConfig;
class UNPCDefenseController;
class UNPCOffenseController;
class UPlayerCombatComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODCOMBAT_API UNPCCombatComponent : public UCombatComponentBase, public IGuardAreaReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyConfig* EnemyConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FStunAttackData> StunAttacks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* AttackAction;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECharacterAttitude CurrentAttitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAttitude AttitudeBeforeCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> AggresiveTowards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APawn> CollisionDetectorTarget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttitudeChangedDelegate OnAttitudeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTargetEscapedDelegate OnTargetEscapedFromCombat;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* NeutralBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* OffenseBehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBlockingDirection PreferredActiveGuardDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPlayerCombatComponent* TargetPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCOffenseController* OffenseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNPCDefenseController* DefenseController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGuardAreaInterface> GuardArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimMontage*> TauntMontagesReadyToGo;
    
public:
    UNPCCombatComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetAttitude(ECharacterAttitude InAttitude);
    
    UFUNCTION(BlueprintCallable)
    void SetAggressiveTowards(APawn* Other);
    
    UFUNCTION(BlueprintCallable)
    void SelectAttackPattern();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlowdownIfPlayerIsInActiveState(const ECombatState NewState);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlowdownIfPlayerIsBlockingCorrectly();
    
    UFUNCTION(BlueprintCallable)
    void RemoveSlowdown();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRebelAIEvent(const FRebelAIEvent& RebelAIEvent) const;
    
    UFUNCTION(BlueprintCallable)
    void OnPawnSensed(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnNoiseHeard(APawn* Instigator, const FVector& Location, float Volume);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetActorLocationWithCameraOffset() const;
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag BP_HitPlayerOpponentFromNewAI(const FCombatNotifyData& Data, AWeaponBase* Weapon, UCombatComponentBase* TargetHit, FRebelAI_AttackHit_Payload AttackHitPayload);
    

    // Fix for true pure virtual functions not being implemented
};

