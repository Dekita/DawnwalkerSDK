#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotificationPanelInterface.generated.h"

class UNotificationInfo;

UINTERFACE(Blueprintable)
class UNotificationPanelInterface : public UInterface {
    GENERATED_BODY()
};

class INotificationPanelInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowNotification(UNotificationInfo* InNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetNotificationsActive(bool bInActive);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanShowNotificationsNow();
    
};

