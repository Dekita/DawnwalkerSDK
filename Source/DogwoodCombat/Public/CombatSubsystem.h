#pragma once
#include "CoreMinimal.h"
#include "DogwoodActionDifficulty.h"
#include "DogwoodRPGDifficulty.h"
#include "DayPhaseChangeBlockerInterface.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "ELoadingScreenState.h"
#include "ERebelGameDifficulty.h"
#include "ERebelSetting.h"
#include "ERebelSettingChangeMode.h"
#include "BossfightStartedDelegateDelegate.h"
#include "CombatStartedDelegateDelegate.h"
#include "OnCharacterDiedDelegate.h"
#include "OnCombatEndedDelegateDelegate.h"
#include "OnCombatParticipantsChangedDelegate.h"
#include "OnCombatStartedWithDefinitionDelegateDelegate.h"
#include "OnHUDProgressBarPercentageSetDelegate.h"
#include "OnHUDProgressBarTextSetDelegate.h"
#include "OnHUDProgressBarToggledDelegate.h"
#include "OnPreCombatAggressionChangeDelegateDelegate.h"
#include "PreCombatEndedDelegateDelegate.h"
#include "PreCombatStartedDelegateDelegate.h"
#include "CombatSubsystem.generated.h"

class AActor;
class UCombatComponentBase;
class UCombatConfig;
class UDataTable;
class UDifficultyConfig;
class URebelAIStub;

UCLASS(Blueprintable)
class DOGWOODCOMBAT_API UCombatSubsystem : public UTickableWorldSubsystem, public ISaveGameInterface, public IDayPhaseChangeBlockerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBossfightStartedDelegate OnBossfightStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCombatStartedDelegate OnCombatStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatStartedWithDefinitionDelegate OnCombatStartedWithDefinition;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreCombatStartedDelegate OnPreCombat;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPreCombatEndedDelegate OnPreCombatEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreCombatAggressionChangeDelegate OnPreCombatAggressionChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatEndedDelegate OnCombatEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDied OnCharacterPreDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCharacterDied OnCharacterDied;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatParticipantsChanged OnNewAiAttackerRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDProgressBarToggled OnHUDProgressBarToggled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDProgressBarPercentageSet OnHUDProgressBarPercentageSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDProgressBarPercentageSet OnHUDProgressBarPercentageSubtracted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHUDProgressBarTextSet OnHUDProgressBarTextSet;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCombatParticipantsChanged OnNewAiAttackerUnregistered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawGuardAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugTickets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCombatComponentActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* GlobalBlendTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> CustomBlendTimes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInCombat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGameDifficulty ActionDifficultyLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERebelGameDifficulty RPGDifficultyLevel;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDifficultyConfig* DifficultyConfig;
    
public:
    UCombatSubsystem();

    UFUNCTION(BlueprintCallable)
    void SetRPGDifficulty(ERebelGameDifficulty NewDifficultyLevel);
    
    UFUNCTION(BlueprintCallable)
    void SetActionDifficulty(ERebelGameDifficulty NewDifficultyLevel);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnSettingChanged(ERebelSetting RebelSetting, float Value, ERebelSettingChangeMode RebelSettingChangeMode);
    
    UFUNCTION(BlueprintCallable)
    void OnNewAICharacterPreDeath(URebelAIStub* Victim, URebelAIStub* Killer);
    
    UFUNCTION(BlueprintCallable)
    void OnNewAICharacterDied(URebelAIStub* Victim, URebelAIStub* Killer);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnLoadingScreenStateChanged(ELoadingScreenState LoadingScreenState);
    
    UFUNCTION(BlueprintCallable)
    void OnFactEntryChanged(const FGameplayTag& FactName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnLastOpponentDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInventoryConsumptionBlockedInCombat();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDogwoodRPGDifficulty GetRPGDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInCombat() const;
    
    UFUNCTION(BlueprintCallable)
    UCombatComponentBase* GetCurrentBossNPC();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCombatConfig* GetCombatConfig();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllAggressiveNPCActors();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAggressiveNpcCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDogwoodActionDifficulty GetActionDifficultySettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERebelGameDifficulty GetActionDifficultyLevel() const;
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnPreCombatEnd(const URebelAIStub* Guard);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnPreCombatAggressionChange(bool bState, const URebelAIStub* Guard);
    
    UFUNCTION(BlueprintCallable)
    void BroadcastOnPreCombat(const URebelAIStub* Guard);
    

    // Fix for true pure virtual functions not being implemented
};

