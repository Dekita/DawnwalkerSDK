#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "QueueStateChangedDelegateDelegate.h"
#include "ActivatableVideoPlayer.generated.h"

class UBinkMediaPlayer;
class UImage;
class UMediaPlayer;
class UScaleBox;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UActivatableVideoPlayer : public UDWActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBinkMediaPlayer* BinkMediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* VideoLayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQueueStateChangedDelegate OnQueueStartedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScaleBox* ScaleBox;
    
public:
    UActivatableVideoPlayer();

private:
    UFUNCTION(BlueprintCallable)
    void HandleVideoPlaybackReachedEnd();
    
    UFUNCTION(BlueprintCallable)
    void HandleVideoPlaybackClosed();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleMediaOpened(const FString& _);
    
public:
    UFUNCTION(BlueprintCallable)
    void DeactivateWidgetIfVideoQueueEmpty();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClearQueueAndInvokeCallbacks();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnSeekCompleted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnMediaOpened();
    
};

