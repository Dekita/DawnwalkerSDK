#pragma once
#include "CoreMinimal.h"
#include "ECourtEntryPowerState.h"
#include "NotificationWidget.h"
#include "InfamyNotificationWidget.generated.h"

class UAlertLevelNotificationInfo;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UInfamyNotificationWidget : public UNotificationWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAlertLevelNotificationInfo* AlertNotification;
    
    UInfamyNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProgressBar(float Progress);
    
private:
    UFUNCTION(BlueprintCallable)
    void TriggerUpdateAnimations();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerOfficerTransitionAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerEdictAnimation(int32 EdictIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void TriggerActivityCompleteAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SwitchToInfamyBar();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShowsCourtEntry() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationsDone();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitializeProgressBar(float MainProgress, float BackgroundProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasOfficer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasEntryReachedAngerLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECourtEntryPowerState GetPreviousPowerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECourtEntryPowerState GetCurrentPowerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ChangesAlertLevel() const;
    
};

