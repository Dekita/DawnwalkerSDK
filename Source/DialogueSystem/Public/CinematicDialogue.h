#pragma once
#include "CoreMinimal.h"
#include "FlowAsset.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "CachedDataContainer.h"
#include "CinematicBindingResolver.h"
#include "DialogueLocalizationGenerationData.h"
#include "DialogueSequenceActor.h"
#include "EDialoguePlaybackMode.h"
#include "LocalizedDialougeLineEventDelegate.h"
#include "MovieSetPositioningDataSource.h"
#include "PostDialogueActionInstanceSet.h"
#include "CinematicDialogue.generated.h"

class AActor;
class ACinematicCharacter;
class ADialogueMovieSet;
class AMovieSetRestrictedArea;
class AStreamingMarker;
class UAkAudioEvent;
class UCameraCutGenerationConfig;
class UCinematicNode_Choice;
class UCinematicNode_Response;
class UDialogueAudioPreset;
class UDialogueStartupTaskBase;
class UOptionalDialogueStartupTaskBase;
class UUserWidget;

UCLASS(Blueprintable)
class DIALOGUESYSTEM_API UCinematicDialogue : public UFlowAsset, public ICinematicBindingResolver, public IMovieSetPositioningDataSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDialoguePlaybackMode PlaybackMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBindByVoiceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayWhenGamePaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<ADialogueMovieSet> DialogueMovieSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<AStreamingMarker>> StreamingMarkers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDialogueSequenceActor> Spawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UCameraCutGenerationConfig> CameraCutGenerationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CustomLookAtTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTeleportCharactersToSlotsWhenFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnRestrictedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LocalizationNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GenerateAssetFolderOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedDataContainer CachedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FDialogueLocalizationGenerationData> LocalizationGenerationDataByCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockAllNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUserWidget> DialogueWidgetOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AMovieSetRestrictedArea* RestrictedArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* PlaybackRootOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeOutOnStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeInOnStart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeFrameOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeOutOnEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformFadeInOnEnd: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndFadeInTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizedDialougeLineEvent OnVoicePlaybackStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLocalizedDialougeLineEvent OnVoicePlaybackFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogueAudioPreset* AudioPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultDialogueStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultDialogueEndAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSpeakerLineStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DefaultSpeakerLineEndAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UOptionalDialogueStartupTaskBase*> AdditionalStartupTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UDialogueStartupTaskBase*> StartupTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<UClass*> FinishedStartupTaskClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FPostDialogueActionInstanceSet> PostDialogueActionInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInterruptible;
    
public:
    UCinematicDialogue();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TrySkipResponseNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TrySkipResponseLine() const;
    
    UFUNCTION(BlueprintCallable)
    void TrySkipDialogue();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void TrySkip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ACinematicCharacter* GetSpeakingCharacter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentSpeakerTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCharacterNameByTag(const FGameplayTag& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicNode_Response* GetActiveResponseNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UCinematicNode_Choice* GetActiveChoiceNode() const;
    

    // Fix for true pure virtual functions not being implemented
};

