#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "NotificationReceiver.generated.h"

class UNotificationInfo;

UINTERFACE(Blueprintable)
class DOGWOODUI_API UNotificationReceiver : public UInterface {
    GENERATED_BODY()
};

class INotificationReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Show(UNotificationInfo* InNotification);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsDisplayingNotification();
    
};

