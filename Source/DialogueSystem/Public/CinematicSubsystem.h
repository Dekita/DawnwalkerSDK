#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "FlowNodeSaveData.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "LoadingScreenBlockerInterface.h"
#include "ChoiceSelectedDelegate.h"
#include "DefaultStartupTask.h"
#include "DialogueActiveEventDelegate.h"
#include "DialogueFinishedEventDelegate.h"
#include "DialogueStartedEventDelegate.h"
#include "GameplayDialogueEventDelegate.h"
#include "OnDebugLinePlaybackFinishedDelegate.h"
#include "OnDebugLinePlaybackStartedDelegate.h"
#include "SpecialChoiceLineSelectedDelegate.h"
#include "CinematicSubsystem.generated.h"

class ACinematicCharacter;
class UCinematicDialogue;
class UCinematicNode_Choice;
class UDataTable;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicSubsystem : public UWorldSubsystem, public ISaveGameInterface, public ILoadingScreenBlockerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueActiveEvent OnDialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueStartedEvent OnPlaybackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueActiveEvent OnPlaybackFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDialogueFinishedEvent OnDialogueFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FChoiceSelected OnChoiceSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugLinePlaybackStarted OnDebugLinePlaybackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDebugLinePlaybackFinished OnDebugLinePlaybackFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* ActiveDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCinematicDialogue*> ActiveGameplayDialogues;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayDialogueEvent OnGameplayDialogueStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayDialogueEvent OnGameplayDialogueFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FGuid, FFlowNodeSaveData> RuntimeSavedNodes;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCinematicDialogue*> QueuedDialogues;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialChoiceLineSelected OnSpecialChoiceLineSelected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultStartupTask> DefaultStartupTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GarmentOffsetIdleTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* GarmentOffsetMultipliers;
    
public:
    UCinematicSubsystem();

    UFUNCTION(BlueprintCallable, Exec)
    static void SkipAllResponses(const bool bCheatActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDialogueActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentlySpeakingInGameplayDialogue(const ACinematicCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoiceUsed(const UCinematicNode_Choice* ChoiceNode, const FGuid& LineGuid) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterPlayingInterruptibleDialogue(const ACinematicCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInCinematicDialogueOrCutscene(const ACinematicCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCharacterInAnyDialogue(const ACinematicCharacter* Character) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicDialogue* GetActiveDialogue() const;
    
    UFUNCTION(BlueprintCallable)
    void CancelGameplayDialoguesForCharacter(const ACinematicCharacter* Character, bool bOnlyInterruptable, int32 PriorityThreshold, const FGameplayTagContainer ExcludeVoiceSets);
    

    // Fix for true pure virtual functions not being implemented
};

