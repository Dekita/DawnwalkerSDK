#pragma once
#include "CoreMinimal.h"
#include "ETargetChangeDirection.h"
#include "ItemHandle.h"
#include "Components/ActorComponent.h"
#include "GameplayAttribute.h"
#include "CombatFocusActionDelegateDelegate.h"
#include "CombatFocusDelegateDelegate.h"
#include "EFocusAbilitiesMode.h"
#include "OnActionExecutedDelegateDelegate.h"
#include "OnFocusTargetChangedDelegate.h"
#include "OnPlanExecutionStartedDelegateDelegate.h"
#include "PlannedAction.h"
#include "Templates/SubclassOf.h"
#include "CombatFocusComponent.generated.h"

class AActor;
class UCombatComponentBase;
class UFinisherAbilityBase;
class UFocusAbilityBase;
class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODCOMBAT_API UCombatFocusComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusDelegate OnCombatFocusStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusDelegate OnCombatFocusEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusDelegate OnFocusModeEnteredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusDelegate OnFocusModeExitedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusActionDelegate OnActionCancelled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusActionDelegate OnActionSubmitted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusActionDelegate OnActionExecuted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnActionExecutedDelegate OnActionExecutedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlanExecutionStartedDelegate OnPlanExecutionStartedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusTargetChanged OnFocusTargetChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatFocusDelegate OnActionCostApplied;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowmoAmount;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttribute ChargedActionSlotsAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> ConsumeActionSlotEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> RefundActionSlotEffect;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<UFocusAbilityBase*> FocusAbilityLoadout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> PossibleOpenWorldActorsToTarget;
    
public:
    UCombatFocusComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    bool TryPlanAbility(UFocusAbilityBase* Ability);
    
    UFUNCTION(BlueprintCallable)
    void ToggleFocusAbilitiesMode();
    
    UFUNCTION(BlueprintCallable)
    void SwitchTargetedFocusActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SwitchOpenWorldTarget(ETargetChangeDirection TargetChangeDirection);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetInFront();
    
    UFUNCTION(BlueprintCallable)
    void SetSlotsChargedOverride(const float InSlots);
    
    UFUNCTION(BlueprintCallable)
    void ResetSlotsChargedOverride();
    
    UFUNCTION(BlueprintCallable)
    void ResetCooldowns();
    
    UFUNCTION(BlueprintCallable)
    void ReduceCooldownsByValue(const float ReductionValueInSeconds);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetingStarted();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusModeExited();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusModeEntered();
    
    UFUNCTION(BlueprintCallable)
    void OnCombatLockTargetChanged(UCombatComponentBase* InTarget);
    
    UFUNCTION(BlueprintCallable)
    void OnCombatFocusInterrupted();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInstantActionPlanned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBlockedByAbility();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAbilityAlreadyPlanned(UFocusAbilityBase* Ability) const;
    
    UFUNCTION(BlueprintCallable)
    AActor* GetTargetedActor();
    
    UFUNCTION(BlueprintCallable)
    TArray<FPlannedAction> GetPlannedActions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOverallPlannedHealthOrBloodCost(UFocusAbilityBase* Ability);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOverallPlannedFocusChargeCost(UFocusAbilityBase* Ability);
    
    UFUNCTION(BlueprintCallable)
    void GetCurrentLoadout(TArray<UFocusAbilityBase*>& OutCombatAbilities, TArray<UFocusAbilityBase*>& OutFocusAbilities);
    
    UFUNCTION(BlueprintCallable)
    EFocusAbilitiesMode GetCurrentFocusAbilitiesMode();
    
    UFUNCTION(BlueprintCallable)
    void ExecutePlan();
    
    UFUNCTION(BlueprintCallable)
    void ExecuteInstantAbility(UFocusAbilityBase* Ability);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteFinisherAbility(TSubclassOf<UFinisherAbilityBase> FinisherAbility, AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlanNextItemCostAbility(const FItemHandle& Item, int32 QuantityToConsume);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlanNextHealthCostAbility(float HealthOrBloodCost);
    
    UFUNCTION(BlueprintCallable)
    bool CanPlanNextChargeCostAbility(float FocusChargeCost);
    
    UFUNCTION(BlueprintCallable)
    bool CancelAbility();
    
};

