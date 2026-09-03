#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ENotificationType.h"
#include "NotificationInfo.generated.h"

UCLASS(Abstract, Blueprintable)
class DOGWOODUI_API UNotificationInfo : public UObject {
    GENERATED_BODY()
public:
    UNotificationInfo();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldCloseAutomatically() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldBlockQueue() const;
    
    UFUNCTION(BlueprintCallable)
    void NotifyEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ENotificationType GetType() const;
    
};

