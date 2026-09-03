#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActiveGameplayEffectHandle.h"
#include "EGenericAAEffectType.h"
#include "FocusAbilityLevelDefinition.h"
#include "HitReactionMontageSet.h"
#include "OnFocusAbilitySequenceFinishedDelegate.h"
#include "OnFocusAbilitySequenceStartedDelegate.h"
#include "OnFocusCinematicModeChangedDelegate.h"
#include "PlayFocusAbilityMontageParameters.h"
#include "PlayFocusAbilitySequenceParameters.h"
#include "Templates/SubclassOf.h"
#include "FocusAbilitiesSubsystem.generated.h"

class AActor;
class ALevelSequenceActor;
class UAbilitySystemComponent;
class UCinematicDialogue;
class UDogwoodFocusConfig;
class UEnhancedInputComponent;
class UFocusAbilityBase;
class UGameplayAbility;
class UGameplayEffect;
class ULevelSequencePlayer;
class URebelSpatialLayer;
class UStringTable;

UCLASS(Blueprintable)
class DOGWOODFOCUS_API UFocusAbilitiesSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayFocusAbilitySequenceParameters> SequencesToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayFocusAbilityMontageParameters> MontagesToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TransformOriginActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* SequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ALevelSequenceActor*> SubsequenceActors;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusAbilitySequenceStarted OnFocusAbilityStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusAbilitySequenceFinished OnFocusAbilityFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusAbilitySequenceStarted OnCombatFocusAbilityStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusAbilitySequenceStarted OnCombatFocusAbilityFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusCinematicModeChanged OnFocusCinematicModeChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> PauseEffectsToIgnore;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDogwoodFocusConfig* Config;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStringTable* FocusStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedMinHealthAfterCastEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URebelSpatialLayer* FocusDetectorsLayer;
    
public:
    UFocusAbilitiesSubsystem();

    UFUNCTION(BlueprintCallable)
    void UnlockAllFocusAbilities_Debug(TArray<TSubclassOf<UFocusAbilityBase>> FocusAbilityParentsAllowed);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDisablingAllCooldowns_Debug();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseStaminaDamage(const UAbilitySystemComponent* ASC) const;
    
    UFUNCTION(BlueprintCallable)
    void SetShouldRestorePlayersControlRotation(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldLeaveTargetOnSequencePosition();
    
    UFUNCTION(BlueprintCallable)
    void SetShouldLeaveInstigatorOnSequencePosition();
    
    UFUNCTION(BlueprintCallable)
    void SetIsShadowStormSlowMoEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentFocusAbility(UFocusAbilityBase* CurrentFocusAbilityBase);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentAbilityMainTarget(AActor* TargetActor);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAscFromAbilityMode(UAbilitySystemComponent* ASC);
    
    UFUNCTION(BlueprintCallable)
    void PlayMontageForActor(UPARAM(Ref) TArray<FHitReactionMontageSet>& HitReactionMontageSet, UPARAM(Ref) TArray<int32>& UsedMontagesHashes, AActor* Actor, UPARAM(Ref) bool& bShouldSkipDeathAnimation, float PlayRate, float StartOffset);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSequenceFromQueueFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFromQueueFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted(UCinematicDialogue* Dialogue, bool bWasStateKept);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsNewFocusAbilitiesFlowEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyVatsMontagePlaying();
    
    UFUNCTION(BlueprintCallable)
    bool IsAbilitySequenceOrMontagePlaying();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValueScaledFromAbility(TSubclassOf<UFocusAbilityBase> AbilityClass, float BaseEffectValue, AActor* Target) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSlowMoValueForSprint() const;
    
    UFUNCTION(BlueprintCallable)
    float GetNewSlowMoValue();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsShadowStormSlowMoEnabled();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsInFocusAbilityCinematicMode();
    
    UFUNCTION(BlueprintCallable)
    bool GetCurrentSequenceRootTransformWithDirectionToPlayer(FTransform& Transform);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFocusAbilityLevelDefinition GetCurrentLevelDefinitionOfCurrentAbility() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FFocusAbilityLevelDefinition GetCurrentLevelDefinitionOfAbility(TSubclassOf<UFocusAbilityBase> AbilityClass) const;
    
    UFUNCTION(BlueprintCallable)
    UFocusAbilityBase* GetCurrentFocusAbility();
    
    UFUNCTION(BlueprintCallable)
    UDogwoodFocusConfig* GetConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanApplyGenericEffect(const AActor* TargetActor, EGenericAAEffectType GenericAAEffectType, float ApplyChance) const;
    
    UFUNCTION(BlueprintCallable)
    bool AreCooldownsEnabled_Debug();
    
    UFUNCTION(BlueprintCallable)
    void ApplyInstantAbility(AActor* TargetActor, UGameplayAbility* Ability, int32 AbilityLevel);
    
    UFUNCTION(BlueprintCallable)
    void AddAllFocusAbilitiesRequiredItems_Debug();
    
};

