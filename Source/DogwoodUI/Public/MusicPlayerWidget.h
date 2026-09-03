#pragma once
#include "CoreMinimal.h"
#include "DWActivatableWidget.h"
#include "MusicPlayerWidget.generated.h"

class UAkAudioEvent;
class UDataTable;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UMusicPlayerWidget : public UDWActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PlayerEntriesDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayedEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPaused;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* CurrentAudioEvent;
    
public:
    UMusicPlayerWidget();

protected:
    UFUNCTION(BlueprintCallable)
    void OnEntryClicked(int32 EntryIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryChanged(int32 Previous, int32 Current);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlayPosition();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentPlayDuration();
    
};

