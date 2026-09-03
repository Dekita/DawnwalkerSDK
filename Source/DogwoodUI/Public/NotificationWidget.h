#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "Engine/DataTable.h"
#include "ENotificationState.h"
#include "ENotificationType.h"
#include "NotificationReceiver.h"
#include "NotificationWidgetDelegateDelegate.h"
#include "NotificationWidget.generated.h"

class UInputAction;
class UNotificationInfo;
class UUserWidget;
class UWidgetAnimation;

UCLASS(Blueprintable, EditInlineNew)
class DOGWOODUI_API UNotificationWidget : public UCommonActivatableWidget, public INotificationReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNotificationWidgetDelegate EventNotificationHidden;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TriggeringInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DefaultActionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInputAction* TriggeringEnhancedInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle DismissInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* ActionButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UUserWidget* DismissButtonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* ShowAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWidgetAnimation* HideAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENotificationState State;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNotificationInfo* CurrentNotification;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentNotificationDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NotificationCloseTime;
    
public:
    UNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupData();
    
    UFUNCTION(BlueprintCallable)
    void RestoreInputConfig();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnShowAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotificationShown();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnNotificationHidden();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnHideAnimationFinished();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActionPerformed(ENotificationType InCurrentNotificationType);
    
public:
    UFUNCTION(BlueprintCallable)
    void HideActionButton();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FDataTableRowHandle GetNotificationInputAction();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UInputAction* GetNotificationEnhancedInputAction(FText& OutNameOverride);
    
    UFUNCTION(BlueprintCallable)
    void ForceMenuInputConfig();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnNotificationsDisabled();
    

    // Fix for true pure virtual functions not being implemented
};

