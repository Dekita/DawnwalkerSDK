#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CinematicResponseLine.h"
#include "PausableActivatableWidget.h"
#include "CinematicDialogueWidget.generated.h"

class UCinematicDialogue;
class UCinematicDialogueChoiceWidget;
class UCinematicNode;
class UCinematicNode_Choice;
class UCinematicSubsystem;
class UHUDManagerSubsystem;
class UHUDVisibilityPreset;
class USkipButtonWidget;
class UUIManagerSubsystem;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UCinematicDialogueWidget : public UPausableActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCinematicDialogueChoiceWidget* ChoiceWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkipButtonWidget* SkipButtonWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* DialogueHudPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDVisibilityPreset* TimeProgressionHudPreset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIManagerSubsystem* UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicSubsystem* CinematicSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHUDManagerSubsystem* HUDSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicDialogue* DisplayedDialogue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCinematicNode_Choice* DisplayedChoice;
    
public:
    UCinematicDialogueWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateTimedDurationProgress(float Progress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowLine(const FText& SpeakerName, const FText& LineText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetChoiceTimerVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnVoicePlaybackStarted(const UCinematicDialogue* Dialogue, const FCinematicResponseLine& ResponseLine, const FText& LocalizedText);
    
    UFUNCTION(BlueprintCallable)
    void OnVoicePlaybackFinished(const UCinematicDialogue* Dialogue, const FCinematicResponseLine& ResponseLine, const FText& LocalizedText);
    
    UFUNCTION(BlueprintCallable)
    void OnNodePlaybackStarted(UCinematicNode* Node);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugVoicePlaybackStarted(const FText& LocalizedText);
    
    UFUNCTION(BlueprintCallable)
    void OnDebugVoicePlaybackEnded();
    
    UFUNCTION(BlueprintCallable)
    void OnChoicesRevealed(UCinematicNode_Choice* ChoiceNode);
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceSelected(FGuid ChoiceGuid, int32 ChoiceIndex, bool bWasForced);
    
    UFUNCTION(BlueprintCallable)
    void OnChoiceClicked(const FGuid& Guid);
    
    UFUNCTION(BlueprintCallable)
    UWidget* NativeGetDesiredFocusTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideLine();
    
private:
    UFUNCTION(BlueprintCallable)
    void HideCurrentLine();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleSkipActionNative();
    
};

