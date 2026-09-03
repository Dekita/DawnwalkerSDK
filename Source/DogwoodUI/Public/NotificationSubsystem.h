#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "EQuestNotificationType.h"
#include "NotificationSubsystem.generated.h"

class INotificationPanelInterface;
class UNotificationPanelInterface;
class UNotificationInfo;
class UQuest;

UCLASS(Blueprintable)
class DOGWOODUI_API UNotificationSubsystem : public UWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNotificationInfo* CurrentNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNotificationInfo*> NotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNotificationInfo*> NonBlockingNotificationQueue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<INotificationPanelInterface> NotificationPanel;
    
public:
    UNotificationSubsystem();

    UFUNCTION(BlueprintCallable)
    void TryShowNotificationFromNonBlockingQueue();
    
    UFUNCTION(BlueprintCallable)
    void SetNotificationsHidden(const bool bInHidden);
    
    UFUNCTION(BlueprintCallable)
    void RegisterNotificationPanel(TScriptInterface<INotificationPanelInterface> InPanel);
    
    UFUNCTION(BlueprintCallable)
    void PushNotificationBlocker(const FName& BlockerName);
    
    UFUNCTION(BlueprintCallable)
    void PushNotification(UNotificationInfo* Info);
    
    UFUNCTION(BlueprintCallable)
    void PushCollapsibleQuestNotification(const UQuest* TargetQuest, EQuestNotificationType Type);
    
    UFUNCTION(BlueprintCallable)
    void PopNotificationBlocker(const FName& BlockerName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UNotificationInfo* GetCurrentNotificationInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowNotificationsNow() const;
    

    // Fix for true pure virtual functions not being implemented
};

