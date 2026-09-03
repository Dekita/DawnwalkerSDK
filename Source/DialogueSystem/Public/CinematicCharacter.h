#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameplayTagContainer.h"
#include "CharacterStateContainer.h"
#include "CinematicCharacter.generated.h"

class UCinematicDialogue;
class UCinematicNode;
class UQuestComponent;
class URWAudioComponent;
class UVoiceSet;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API ACinematicCharacter : public ACharacter {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuestComponent* QuestComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCinematicMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisibleInCinematic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UVoiceSet> VoiceSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag VoiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRandomizedChatter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStateContainer CharacterStateContainer;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URWAudioComponent* VoiceoverAudioComponent;
    
    ACinematicCharacter(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void UnfreezeClothSimulation();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCinematicMode(const bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResponseStartedHandler(const UCinematicDialogue* Dialogue, bool bIsSpeaker);
    
    UFUNCTION(BlueprintCallable)
    void ResponseFinishedHandler(const UCinematicDialogue* Dialogue, bool bIsSpeaker);
    
    UFUNCTION(BlueprintCallable)
    void ResetHairSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothSimulation();
    
    UFUNCTION(BlueprintCallable)
    void ResetClothAndHairSimulation();
    
    UFUNCTION(BlueprintCallable)
    void PreNodePlaybackStaredHandler(UCinematicNode* Node);
    
    UFUNCTION(BlueprintCallable)
    void PostNodePlaybackStaredHandler(UCinematicNode* Node);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCinematicMode(bool bActive);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialoguePlaybackStarted(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnGameplayDialoguePlaybackFinished(UCinematicDialogue* Dialogue);
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackStarted(UCinematicDialogue* Dialogue, bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable)
    void OnDialoguePlaybackFinished(UCinematicDialogue* Dialogue, const bool bKeepDialogueState);
    
    UFUNCTION(BlueprintCallable)
    void NodePlaybackFinishedHandler(UCinematicNode* Node);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsASequencerActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterDisplayName() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FreezeClothSimulation();
    
};

