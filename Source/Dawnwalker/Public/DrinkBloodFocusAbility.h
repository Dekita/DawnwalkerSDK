#pragma once
#include "CoreMinimal.h"
#include "EBloodDrinkingStage.h"
#include "ECombatState.h"
#include "OpenWorldFocusAbility.h"
#include "CreatureEntry.h"
#include "DayPhaseChangeBlockerInterface.h"
#include "ECreatureSizeType.h"
#include "Engine/EngineTypes.h"
#include "DrinkBloodCreatureAnim.h"
#include "DrinkBloodSequencesSet.h"
#include "DrinkBloodSequencesSets.h"
#include "DrinkBloodFocusAbility.generated.h"

class AActor;
class UAnimMontage;
class UAnimSequence;
class UFocusAbilityLevelSequence;
class UTexture2D;

UCLASS(Blueprintable)
class DAWNWALKER_API UDrinkBloodFocusAbility : public UOpenWorldFocusAbility, public IDayPhaseChangeBlockerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ECreatureSizeType, FDrinkBloodSequencesSets> CreatureSizeDefaultSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrinkBloodSequencesSets> CustomCreatureSequences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDrinkBloodCreatureAnim> CustomCreatureAnims;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> BloodReplenishPercentageEscapePerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BossEscapeHealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FDrinkBloodSequencesSet SequencesSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> TargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBloodDrinkingStage CurrentStage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLostControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonPressed;
    
public:
    UDrinkBloodFocusAbility();

private:
    UFUNCTION(BlueprintCallable)
    void TickDrinking();
    
    UFUNCTION(BlueprintCallable)
    void StartDrinking();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBloodDrinking(const AActor* InTargetActor, const FCreatureEntry& InCreatureEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldForceEscape() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void PrepareForDrinking();
    
    UFUNCTION(BlueprintCallable)
    void PlayWaitingForDrinking();
    
    UFUNCTION(BlueprintCallable)
    void PlayStruggleToEscape();
    
    UFUNCTION(BlueprintCallable)
    void PlayStruggleToBite_Uncontrolled();
    
    UFUNCTION(BlueprintCallable)
    void PlayStruggleToBite();
    
    UFUNCTION(BlueprintCallable)
    void PlayStruggle();
    
public:
    UFUNCTION(BlueprintCallable)
    void PlayAttack();
    
private:
    UFUNCTION(BlueprintCallable)
    void PlayAnimationLoop();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetEndPlay(AActor* InActor, TEnumAsByte<EEndPlayReason::Type> Reason);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDrinkingPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartDrinking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreparedForDrinking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNonInteractiveBloodDrinking(const ECreatureSizeType SequenceCreatureType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnFinishDrinkingCompleted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishDrinking();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDrinkingStageChanged(EBloodDrinkingStage NewStage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnControlledDrinkingFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnCombatStateChanged(const ECombatState NewState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinHealthPercentageToEscape() const;
    
    UFUNCTION(BlueprintCallable)
    UFocusAbilityLevelSequence* GetLevelSubsequenceForPlaying(const EBloodDrinkingStage InStage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetInstigatorCustomAnimMontage() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FText GetEscapeChanceText(const float Chance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UTexture2D* GetEscapeChanceIcon() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimSequence* GetCreatureCustomAnim() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBloodReplenishPercentageToEscape() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void FinishDrinkingByButtonRelease();
    
    UFUNCTION(BlueprintCallable)
    void FinishDrinking(bool bInstant, bool bPlayAnims);
    
    UFUNCTION(BlueprintCallable)
    void End();
    

    // Fix for true pure virtual functions not being implemented
};

