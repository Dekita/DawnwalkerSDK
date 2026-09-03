#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SaveGameInterface.h"
#include "RebelAudioMusicSubsystem.h"
#include "AudioMusicSubsystem.generated.h"

class UAkAudioEvent;
class UAkStateValue;
class UAudioMusicDataAsset;
class UCinematicDialogue;

UCLASS(Blueprintable)
class DOGWOODAUDIO_API UAudioMusicSubsystem : public URebelAudioMusicSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAudioMusicDataAsset* MusicDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MacroMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ExplorationMusicStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> ExplicitStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> VolumeStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BiomeMusicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* InitializationEventCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> SoftInitializationEventCached;
    
public:
    UAudioMusicSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldPostExplorationMacroState() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMacroMusicState(FGameplayTag MusicState);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceExplicitMusicState(FGameplayTag MusicStateTag);
    
    UFUNCTION(BlueprintCallable)
    void PushExplicitMusicState(FGameplayTag MusicState);
    
    UFUNCTION(BlueprintCallable)
    void PostMusicEvent(TSoftObjectPtr<UAkAudioEvent> Event, bool IsInitializationEvent);
    
    UFUNCTION(BlueprintCallable)
    FGameplayTag PopExplicitMusicState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag PeekExplicitMusicState() const;
    
    UFUNCTION(BlueprintCallable)
    void OnDialogueStarted(UCinematicDialogue* Dialogue, const bool bWasStateKept);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMusicInitialized() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsMainCharacterInMusicRelevantVolume(FGameplayTag VolumeTag);
    
    UFUNCTION(BlueprintCallable)
    UAkStateValue* GetMusicStateByCombatFaction(FGameplayTag FactionId, FGameplayTag NPCMusicOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetMacroMusicState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ContainsExplicitState(FGameplayTag MusicState) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearVolumeStack();
    

    // Fix for true pure virtual functions not being implemented
};

