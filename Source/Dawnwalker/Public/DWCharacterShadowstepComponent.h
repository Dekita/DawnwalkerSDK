#pragma once
#include "CoreMinimal.h"
#include "AttackData.h"
#include "Components/ActorComponent.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Engine/EngineTypes.h"
#include "GameplayTagContainer.h"
#include "RebelCameraModeHandle.h"
#include "EDawnwalkerShadowstepAimingState.h"
#include "EDawnwalkerShadowstepState.h"
#include "EDawnwalkerShadowstepTargetState.h"
#include "OnRequestUpdateShadowstepTargetEndedDelegate.h"
#include "OnShadowstepAttemptPossibleDelegate.h"
#include "OnShadowstepEndedDelegate.h"
#include "OnShadowstepStartedDelegate.h"
#include "OnShadowstepTargetStateChangedDelegate.h"
#include "OnShadowstepWarpTargetOverrideDelegate.h"
#include "RebelGeomFloorTestFlags.h"
#include "ShadowstepCameraBlendSettings.h"
#include "Templates/SubclassOf.h"
#include "DWCharacterShadowstepComponent.generated.h"

class UAkAudioEvent;
class UAnimMontage;
class UCombatAction;
class UCurveFloat;
class UDawnwalkerTraversalMontageSet;
class UEnvQuery;
class UGameplayEffect;
class UNiagaraComponent;
class UNiagaraSystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAWNWALKER_API UDWCharacterShadowstepComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShadowstepAttemptPossible OnShadowstepAttemptPossible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShadowstepCameraBlendSettings DefaultCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShadowstepCameraBlendSettings SnapBehindCameraSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* DefaultShadowstepFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CombatShadowstepStartBurstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* CombatShadowstepEndBurstFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* DefaultShadowstepMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDawnwalkerTraversalMontageSet* EndMontages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* CombatAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* OutOfCombatAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowstepVelocityMps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSnappingDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RoofCornerDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags RoofCornerTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRebelGeomFloorTestFlags AimTestFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeMaxStickOutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SnappingBehindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AimSearchChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> AimCollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RefundEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRefunds;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShadowstepStarted OnShadowstepStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShadowstepEnded OnShadowstepEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShadowstepTargetStateChanged OnShadowstepTargetStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestUpdateShadowstepTargetEnded OnRequestUpdateShadowstepTargetEnded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowstepAimOffsetMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* CombatSnapBehindQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShadowstepWarpTargetOverride OnShadowstepWarpTargetOverride;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* MovementCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* AttackAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCombatAction* CounterAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> EffectAfterTeleportTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimMontage* TransitionMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRebelCameraModeHandle CameraModeHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackData> CharacterResponses;
    
public:
    UDWCharacterShadowstepComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool StartShadowstep(UNiagaraComponent* ShadowstepFX, UAnimMontage* ShadowstepMontage, FGameplayTagContainer AbilitiesToCancel);
    
    UFUNCTION(BlueprintCallable)
    void SetAimingEnabled(bool bInAimingEnabled);
    
private:
    UFUNCTION(BlueprintCallable)
    void ProgressShadowstep(float Time);
    
    UFUNCTION()
    void OnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPointNotifyPayload);
    
    UFUNCTION(BlueprintCallable)
    void OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasValidShadowstepTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBeenTriggeredRecently(float InSeconds) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadowstepVerticalRangeUp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadowstepVerticalRangeDown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDawnwalkerShadowstepTargetState GetShadowstepTargetState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDawnwalkerShadowstepState GetShadowstepState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadowstepProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShadowstepHorizontalRange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDawnwalkerShadowstepAimingState GetAimingState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAimingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void EndShadowstep(bool bWasInterrupted, bool TeleportToTargetLocation);
    
    UFUNCTION(BlueprintCallable)
    void ConditionalUpdateWithPossibleTarget();
    
    UFUNCTION(BlueprintCallable)
    void ConditionalTryRetrigger();
    
    UFUNCTION(BlueprintCallable)
    void AttemptShadowstep();
    
};

