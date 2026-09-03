#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EInteractiveSceneTriggerSource.h"
#include "OnCancelledInteractiveSceneDelegateDelegate.h"
#include "OnCompletedInteractiveSceneDelegateDelegate.h"
#include "InteractiveSceneObject.generated.h"

class ALevelSequenceActor;
class ULevelSequence;
class ULevelSequencePlayer;

UCLASS(Blueprintable)
class DOGWOODWORLD_API AInteractiveSceneObject : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInteractiveSceneTriggerSource TriggerSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCompletedInteractiveSceneDelegate OnCompletedInteractiveScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelledInteractiveSceneDelegate OnCancelledInteractiveScene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALevelSequenceActor* LevelSequenceActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformFadeOutOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformFadeInOnStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartFadeInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformFadeOutOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPerformFadeInOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EndFadeInTime;
    
    AInteractiveSceneObject(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractiveSceneStartedEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnInteractiveScenePlaybackStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractiveSceneCompletedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInteractiveSceneCancelledEvent();
    
    UFUNCTION(BlueprintCallable)
    void OnCompletedInteractiveSceneNotification();
    
    UFUNCTION(BlueprintCallable)
    void OnCancelledInteractiveSceneNotification();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULevelSequencePlayer* GetSequencePlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    ULevelSequence* GetInteractiveSceneLevelSequence() const;
    
};

