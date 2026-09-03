#pragma once
#include "CoreMinimal.h"
#include "ECreatureCategoryType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "DrinkBloodTriggerInteractionDelegate.h"
#include "InteractiveBloodDrinkingFinishedDelegate.h"
#include "OnBloodDrinkingCharacterDelegate.h"
#include "PostDrinkBloodDialogueData.h"
#include "Templates/SubclassOf.h"
#include "DrinkBloodSubsystem.generated.h"

class AActor;
class UGameplayEffect;

UCLASS(Blueprintable)
class DAWNWALKER_API UDrinkBloodSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingCharacter OnBloodDrinkingInitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingCharacter OnStruggleStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingCharacter OnBloodDrinkingStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingCharacter OnBloodDrinkingStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBloodDrinkingCharacter OnBloodDrinkingInProgressChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDrinkBloodTriggerInteraction OnShowInteraction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractiveBloodDrinkingFinished OnInteractiveBloodDrinkingFinished;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedBloodReplenishEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> LoadedBloodReplenishDurationEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<ECreatureCategoryType, TSubclassOf<UGameplayEffect>> LoadedPostBloodDrinkingEffectClasses;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, double> DialoguePinLastPlayTimeMap;
    
public:
    UDrinkBloodSubsystem();

    UFUNCTION(BlueprintCallable)
    void TryPlayPostBloodDrinkingCreatureDialogue(const FName& CreatureType);
    
    UFUNCTION(BlueprintCallable)
    void TriggerBloodDrinkingInteraction();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ReplenishBlood(AActor* Victim, const float InAmount, const float InDuration) const;
    
    UFUNCTION(BlueprintCallable)
    void OnInnocentKill();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnDrinkingNotInProgress(AActor* Victim);
    
    UFUNCTION(BlueprintCallable)
    void OnDrinkingInProgress(AActor* Victim);
    
public:
    UFUNCTION(BlueprintCallable)
    static void NotifyBloodDrinkingStopped(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyBloodDrinkingStarted(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void NotifyBloodDrinkingInitialized(AActor* Actor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueOnCooldown(const FPostDrinkBloodDialogueData& DialogueData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UGameplayEffect> GetPostBloodDrinkingEffect(ECreatureCategoryType Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInputHoldTimeout() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEscapeChance(const AActor* Victim) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCurrentlyDrinkedVictim() const;
    
};

