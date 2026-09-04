#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Engine/DataTable.h"
#include "NotificationActionWidget.generated.h"

class UInputAction;

UINTERFACE(Blueprintable)
class UNotificationActionWidget : public UInterface {
    GENERATED_BODY()
};

class INotificationActionWidget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEnhancedAction(UInputAction* InputAction, const FText& InDisplayNameOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAction(const FDataTableRowHandle& InActionRow);
    
};

